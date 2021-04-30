package com.example.myaudioplayer;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;
import androidx.palette.graphics.Palette;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.media.MediaMetadataRetriever;
import android.media.MediaPlayer;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.SeekBar;
import android.widget.TextView;

import com.bumptech.glide.Glide;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

import java.util.ArrayList;

import static com.example.myaudioplayer.MainActivity.musicFiles;

public class PlayerActivity extends AppCompatActivity {


    TextView song_name,artist_name,duration_played,duration_total;
    ImageView cover_art,nextbtn,prevbtn,backbtn,shufflebtn,repeatbtn;
    FloatingActionButton playPausebtn;
    SeekBar seekBar;
    static Uri uri;
    static MediaPlayer mediaPlayer;
    int position=-1;
    static ArrayList<MusicFiles> listSongs=new ArrayList<>();
    private Handler handler=new Handler();
    private Thread playPauseThread,prevThread,nextThread;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_player);
        
        initView();
        getIntentMethod();
        song_name.setText(listSongs.get(position).getTitle());
        artist_name.setText(listSongs.get(position).getArtist());
        seekBar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                if (mediaPlayer!=null && fromUser)
                {
                    mediaPlayer.seekTo(progress*1000);
                }
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {

            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {

            }
        });
        PlayerActivity.this.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mediaPlayer!=null)
                {
                    int mCurrentPosition=mediaPlayer.getCurrentPosition()/1000;
                    seekBar.setProgress(mCurrentPosition);
                    duration_played.setText(formattedTime(mCurrentPosition));
                }
                handler.postDelayed(this,1000);
            }


        });
    }

    @Override
    protected void onResume() {
        playThreadbtn();
        prevThreadbtn();
        nextThreadbtn();
        super.onResume();
    }

    private void playThreadbtn() {
        playPauseThread=new Thread(){
            @Override
            public void run() {
                super.run();
                playPausebtn.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        playPausebtnClicked();
                    }
                });
            }
        };
        playPauseThread.start();

    }

    private void playPausebtnClicked() {

        if (mediaPlayer.isPlaying())
        {
            playPausebtn.setImageResource(R.drawable.ic_play);
            mediaPlayer.pause();
            seekBar.setMax(mediaPlayer.getDuration()/1000);
            PlayerActivity.this.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mediaPlayer!=null)
                    {
                        int mCurrentPosition=mediaPlayer.getCurrentPosition()/1000;
                        seekBar.setProgress(mCurrentPosition);

                    }
                    handler.postDelayed(this,1000);
                }


            });
        }
        else
        {
            playPausebtn.setImageResource(R.drawable.ic_pause);
            mediaPlayer.start();
            seekBar.setMax(mediaPlayer.getDuration()/1000);
            PlayerActivity.this.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mediaPlayer!=null)
                    {
                        int mCurrentPosition=mediaPlayer.getCurrentPosition()/1000;
                        seekBar.setProgress(mCurrentPosition);
                    }
                    handler.postDelayed(this,1000);
                }


            });
        }
    }

    private void prevThreadbtn(){
        prevThread=new Thread(){
            @Override
            public void run() {
                super.run();
                prevbtn.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        prevbtnClicked();
                    }
                });
            }
        };
        prevThread.start();
    }

    private void prevbtnClicked() {

        if (mediaPlayer.isPlaying())
        {
            mediaPlayer.stop();
            mediaPlayer.release();
            position=((position-1)<0 ? (listSongs.size()-1):(position-1));
            uri=Uri.parse(listSongs.get(position).getPath());
            mediaPlayer=MediaPlayer.create(getApplicationContext(),uri);
            metaData(uri);
            song_name.setText(listSongs.get(position).getTitle());
            artist_name.setText(listSongs.get(position).getArtist());
            seekBar.setMax(mediaPlayer.getDuration()/1000);
            PlayerActivity.this.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mediaPlayer!=null)
                    {
                        int mCurrentPosition=mediaPlayer.getCurrentPosition()/1000;
                        seekBar.setProgress(mCurrentPosition);
                    }
                    handler.postDelayed(this,1000);
                }


            });

            playPausebtn.setImageResource(R.drawable.ic_pause);
            mediaPlayer.start();

        }
        else
        {
            mediaPlayer.stop();
            mediaPlayer.release();
            position=((position-1)<0 ? (listSongs.size()-1):(position-1));
            uri=Uri.parse(listSongs.get(position).getPath());
            mediaPlayer=MediaPlayer.create(getApplicationContext(),uri);
            metaData(uri);
            song_name.setText(listSongs.get(position).getTitle());
            artist_name.setText(listSongs.get(position).getArtist());
            seekBar.setMax(mediaPlayer.getDuration()/1000);
            PlayerActivity.this.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mediaPlayer!=null)
                    {
                        int mCurrentPosition=mediaPlayer.getCurrentPosition()/1000;
                        seekBar.setProgress(mCurrentPosition);
                    }
                    handler.postDelayed(this,1000);
                }


            });

            playPausebtn.setImageResource(R.drawable.ic_play);
        }

    }

    private void nextThreadbtn() {
        nextThread=new Thread(){
            @Override
            public void run() {
                super.run();
                nextbtn.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        nextbtnClicked();
                    }
                });
            }
        };
        nextThread.start();

    }

    private void nextbtnClicked() {
        if (mediaPlayer.isPlaying())
        {
            mediaPlayer.stop();
            mediaPlayer.release();
            position=((position+1)%listSongs.size());
            uri=Uri.parse(listSongs.get(position).getPath());
            mediaPlayer=MediaPlayer.create(getApplicationContext(),uri);
            metaData(uri);
            song_name.setText(listSongs.get(position).getTitle());
            artist_name.setText(listSongs.get(position).getArtist());
            seekBar.setMax(mediaPlayer.getDuration()/1000);
            PlayerActivity.this.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mediaPlayer!=null)
                    {
                        int mCurrentPosition=mediaPlayer.getCurrentPosition()/1000;
                        seekBar.setProgress(mCurrentPosition);
                    }
                    handler.postDelayed(this,1000);
                }


            });

            playPausebtn.setImageResource(R.drawable.ic_pause);
            mediaPlayer.start();

        }
        else
        {
            mediaPlayer.stop();
            mediaPlayer.release();
            position=((position+1)%listSongs.size());
            uri=Uri.parse(listSongs.get(position).getPath());
            mediaPlayer=MediaPlayer.create(getApplicationContext(),uri);
            metaData(uri);
            song_name.setText(listSongs.get(position).getTitle());
            artist_name.setText(listSongs.get(position).getArtist());
            seekBar.setMax(mediaPlayer.getDuration()/1000);
            PlayerActivity.this.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mediaPlayer!=null)
                    {
                        int mCurrentPosition=mediaPlayer.getCurrentPosition()/1000;
                        seekBar.setProgress(mCurrentPosition);
                    }
                    handler.postDelayed(this,1000);
                }


            });

            playPausebtn.setImageResource(R.drawable.ic_play);
        }
    }

    private String formattedTime(int mCurrentPosition) {
            String totalout="";
            String totalNew;
            String seconds=String.valueOf(mCurrentPosition%60);
            String minutes=String.valueOf(mCurrentPosition/60);
            totalout=minutes+ ":" + seconds;
            totalNew=minutes+ ":" +"0" + seconds;

            if (seconds.length()==1)
            {
                return totalNew;
            }
            else {
                return totalout;
            }
    }

    private void getIntentMethod() {
        position=getIntent().getIntExtra("position",-1);
        listSongs=musicFiles;
        if (listSongs!=null)
        {
            playPausebtn.setImageResource(R.drawable.ic_pause);
            uri=Uri.parse(listSongs.get(position).getPath());
        }
        if (mediaPlayer!=null) {
            mediaPlayer.stop();
            mediaPlayer.release();
            mediaPlayer=MediaPlayer.create(getApplicationContext(),uri);
            mediaPlayer.start();
        }
        else {
            mediaPlayer=MediaPlayer.create(getApplicationContext(),uri);
            mediaPlayer.start();
        }
        seekBar.setMax(mediaPlayer.getDuration()/1000);
        metaData(uri);

    }

    private void initView() {
            song_name=findViewById(R.id.song_name);
            artist_name=findViewById(R.id.song_artist);
            duration_played=findViewById(R.id.duration_played);
            duration_total=findViewById(R.id.duration_total);
            cover_art=findViewById(R.id.cover_art);
            nextbtn=findViewById(R.id.id_next);
            prevbtn=findViewById(R.id.id_prev);
            backbtn=findViewById(R.id.back_btn);
            shufflebtn=findViewById(R.id.id_shuffle);
            repeatbtn=findViewById(R.id.id_repeat);
            playPausebtn=findViewById(R.id.play_pause);
            seekBar=findViewById(R.id.seekBar);
    }

    private void metaData(Uri uri)
    {
        MediaMetadataRetriever retriever=new MediaMetadataRetriever();
        retriever.setDataSource(uri.toString());
        int durationTotal=Integer.parseInt(listSongs.get(position).getDuration())/1000 ;
        duration_total.setText(formattedTime(durationTotal));
        byte[] art=retriever.getEmbeddedPicture();
        Bitmap bitmap;

        if (art!=null)
        {
            Glide.with(this).asBitmap().load(art).into(cover_art);
            bitmap= BitmapFactory.decodeByteArray(art,0,art.length);
            Palette.from(bitmap).generate(new Palette.PaletteAsyncListener() {
                @Override
                public void onGenerated(@Nullable Palette palette) {
                    Palette.Swatch swatch=palette.getDominantSwatch();
                    if (swatch!=null)
                    {
                        ImageView gradient=findViewById(R.id.image_view_gradient);
                        RelativeLayout mContainer=findViewById(R.id.mContainer);
                        gradient.setBackgroundResource(R.drawable.gradient_bg);
                        mContainer.setBackgroundResource(R.drawable.main_bg);
                        GradientDrawable gradientDrawable=new GradientDrawable(GradientDrawable.Orientation.BOTTOM_TOP,
                                new int[]{swatch.getRgb(),0x00000000});
                        gradient.setBackground(gradientDrawable);

                        GradientDrawable gradientDrawableBg=new GradientDrawable(GradientDrawable.Orientation.BOTTOM_TOP,
                                new int[]{swatch.getRgb(),swatch.getRgb()});
                        mContainer.setBackground(gradientDrawableBg);
                        song_name.setTextColor(swatch.getTitleTextColor());
                        artist_name.setTextColor(swatch.getBodyTextColor());
                    }
                    else
                    {
                        ImageView gradient=findViewById(R.id.image_view_gradient);
                        RelativeLayout mContainer=findViewById(R.id.mContainer);
                        gradient.setBackgroundResource(R.drawable.gradient_bg);
                        mContainer.setBackgroundResource(R.drawable.main_bg);
                        GradientDrawable gradientDrawable=new GradientDrawable(GradientDrawable.Orientation.BOTTOM_TOP,
                                new int[]{0xff000000,0x00000000});
                        gradient.setBackground(gradientDrawable);

                        GradientDrawable gradientDrawableBg=new GradientDrawable(GradientDrawable.Orientation.BOTTOM_TOP,
                                new int[]{0xff000000,0xff000000});
                        mContainer.setBackground(gradientDrawableBg);
                        song_name.setTextColor(Color.WHITE);
                        artist_name.setTextColor(Color.DKGRAY);
                    }
                }

            });
        }
        else {
            Glide.with(this).asBitmap().load(R.drawable.music).into(cover_art);
            ImageView gradient=findViewById(R.id.image_view_gradient);
            RelativeLayout mContainer=findViewById(R.id.mContainer);
            gradient.setBackgroundResource(R.drawable.gradient_bg);
            mContainer.setBackgroundResource(R.drawable.main_bg);
            song_name.setTextColor(Color.WHITE);
            artist_name.setTextColor(Color.DKGRAY);
        }
    }
}