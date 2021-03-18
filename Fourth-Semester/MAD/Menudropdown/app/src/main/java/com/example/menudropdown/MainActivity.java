package com.example.menudropdown;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

import android.graphics.Color;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    ConstraintLayout clayout;
    TextView tv;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tv=findViewById(R.id.tview);
        clayout=findViewById(R.id.clayout);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu,menu);
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {

        switch (item.getItemId())
        {
            case R.id.blue:
                clayout.setBackgroundColor(Color.BLUE);
                tv.setTextColor(Color.CYAN);
                return true;


            case R.id.black:
                clayout.setBackgroundColor(Color.BLACK);
                tv.setTextColor(Color.WHITE);
                return true;

            case R.id.red:
                clayout.setBackgroundColor(Color.RED);
                tv.setTextColor(Color.DKGRAY);
                return true;

        }
        return super.onOptionsItemSelected(item);
    }
}