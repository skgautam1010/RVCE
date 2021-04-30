package com.example.progressbar;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Handler;
import android.widget.ProgressBar;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private int progressStatus=0;
    private TextView textView;
    private Handler handler=new Handler();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        progressBar=findViewById(R.id.pBar);
        textView=findViewById(R.id.tView);


        new Thread(new Runnable() {
            @Override
            public void run() {
                while (progressStatus<100)
                {
                    progressStatus +=1;

                    handler.post(new Runnable() {
                        @Override
                        public void run() {
                            progressBar.setProgress(progressStatus);
                            textView.setText(progressStatus+"/"+progressBar.getMax());
                        }
                    });

                    try {
                        Thread.sleep(200);
                    }catch (Exception e)
                    {
                        e.printStackTrace();
                    }
                }

            }
        }).start();
    }
}