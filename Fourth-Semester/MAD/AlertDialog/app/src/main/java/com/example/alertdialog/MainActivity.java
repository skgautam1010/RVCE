package com.example.alertdialog;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }


    @Override
    public void onBackPressed() {
        AlertDialog.Builder builder=new AlertDialog.Builder(MainActivity.this);

        builder.setTitle("Alert Message").setMessage("Do You Really Want to terminate the app?");

        builder.setPositiveButton("Accept", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                finish();
            }
        })

          .setNegativeButton("Cancel", new DialogInterface.OnClickListener() {
              @Override
              public void onClick(DialogInterface dialog, int which) {
                  dialog.cancel();
              }
          })
            .setCancelable(false)    ;

        AlertDialog alertDialog=builder.create();
        alertDialog.show();

    }
}