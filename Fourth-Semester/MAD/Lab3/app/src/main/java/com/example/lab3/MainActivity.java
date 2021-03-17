package com.example.lab3;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;

import android.Manifest;
import android.content.pm.PackageManager;
import android.media.MediaRecorder;
import android.os.Bundle;
import android.os.Environment;
import android.view.View;
import android.widget.Toast;

import java.io.File;
import java.io.IOException;

public class MainActivity extends AppCompatActivity {

    MediaRecorder mediaRecorder;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ActivityCompat.requestPermissions(this,new String[] {Manifest.permission.RECORD_AUDIO,Manifest.permission.WRITE_EXTERNAL_STORAGE},PackageManager.PERMISSION_GRANTED);
        mediaRecorder=new MediaRecorder();
    }

    public void startRecording(View view){
        try{
            mediaRecorder.setAudioSource(MediaRecorder.AudioSource.DEFAULT);
            mediaRecorder.setOutputFormat(MediaRecorder.OutputFormat.THREE_GPP);
            mediaRecorder.setAudioEncoder(MediaRecorder.AudioEncoder.AMR_NB);

        File path= Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS);
        File file=new File(path,"/AudioRecording.3gp");

        mediaRecorder.setOutputFile(file);
        mediaRecorder.prepare();
        mediaRecorder.start();
            Toast.makeText(getApplicationContext(),"Recording Started",Toast.LENGTH_LONG).show();
        }
        catch (IOException e){
            e.printStackTrace();
        }
    }

    public void stopRecording(View view){
            mediaRecorder.stop();
            mediaRecorder.reset();
            mediaRecorder.release();
            Toast.makeText(getApplicationContext(),"Recording Stopped",Toast.LENGTH_LONG).show();
    }
}
