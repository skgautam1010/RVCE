package com.example.fragments;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.FragmentTransaction;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {
    Button btn1;
    Fragment_one fragment_one=new Fragment_one();
    Fragment_two fragment_two=new Fragment_two();
    int setState=0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        FragmentManager fragmentManager=getSupportFragmentManager();
        FragmentTransaction fragmentTransaction=fragmentManager.beginTransaction();
        fragmentTransaction.add(R.id.clayout,fragment_one);
        fragmentTransaction.commit();
        setState=1;
    }

    public void switchFragment(View view){
        FragmentManager fragmentManager=getSupportFragmentManager();
        FragmentTransaction fragmentTransaction=fragmentManager.beginTransaction();
        if(setState==1){
            fragmentTransaction.replace(R.id.clayout,fragment_two);
            setState=2;
            fragmentTransaction.commit();
        }
        else {
            fragmentTransaction.replace(R.id.clayout,fragment_one);
            setState=1;
            fragmentTransaction.commit();
        }
    }
}