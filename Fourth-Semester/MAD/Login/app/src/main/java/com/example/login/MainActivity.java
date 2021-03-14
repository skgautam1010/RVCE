package com.example.login;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button btn1,btn2;
    EditText username,password;
    public static String value;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btn1=findViewById(R.id.b1);
        btn2=findViewById(R.id.b2);
        username=findViewById(R.id.uname);
        password=findViewById(R.id.pwd);

        btn1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i=new Intent(MainActivity.this,MainActivity2.class);
                if(username.getText().toString().equals("Sonu") && password.getText().toString().equals("12345hello"))
                {
                    value=username.getText().toString();
                    startActivity(i);
                }
                else {
                    Toast.makeText(getApplicationContext(),"Username/Password Is Incorrect",Toast.LENGTH_LONG).show();
                }
            }
        });
        btn2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                finish();
            }
        });
    }
    public static String getValue()
    {
        return value;
    }
}