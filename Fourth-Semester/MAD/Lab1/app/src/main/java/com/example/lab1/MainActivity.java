package com.example.lab1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private EditText op1,op2,txtresult;
    private Button b1,b2,b3,b4,b5;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        op1=findViewById(R.id.e1);
        op2=findViewById(R.id.e2);
        b1=findViewById(R.id.button1);
        b2=findViewById(R.id.button2);
        b3=findViewById(R.id.button3);
        b4=findViewById(R.id.button4);
        b5=findViewById(R.id.button5);
        txtresult=findViewById(R.id.e3);
        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(op1.getText().length()>0 && op2.getText().length()>0)
                {
                    double operation1=Double.parseDouble(op1.getText().toString());
                    double operation2=Double.parseDouble(op2.getText().toString());
                    double result=operation1+operation2;
                    txtresult.setText(Double.toString(result));
                }
                else {
                    Toast toast=Toast.makeText(MainActivity.this,"Enter the required numbers",Toast.LENGTH_LONG);
                    toast.show();
                }
            }
        });
        b2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(op1.getText().length()>0 && op2.getText().length()>0)
                {
                    double operation1=Double.parseDouble(op1.getText().toString());
                    double operation2=Double.parseDouble(op2.getText().toString());
                    double result=operation1-operation2;
                    txtresult.setText(Double.toString(result));
                }
                else
                {
                    Toast.makeText(MainActivity.this, "Enter the required numbers", Toast.LENGTH_SHORT).show();
                }
            }
        });
        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(op1.getText().length()>0 && op2.getText().length()>0)
                {
                    double operation1=Double.parseDouble(op1.getText().toString());
                    double operation2=Double.parseDouble(op2.getText().toString());
                    double result=operation1*operation2;
                    txtresult.setText(Double.toString(result));
                }
                else
                {
                    Toast.makeText(MainActivity.this, "Enter the required numbers", Toast.LENGTH_SHORT).show();
                }
            }
        });
        b4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(op1.getText().length()>0 && op2.getText().length()>0)
                {
                    double operation1=Double.parseDouble(op1.getText().toString());
                    double operation2=Double.parseDouble(op2.getText().toString());
                    double result=operation1/operation2;
                    txtresult.setText(Double.toString(result));
                }
                else
                {
                    Toast.makeText(MainActivity.this, "Enter the required numbers", Toast.LENGTH_SHORT).show();
                }
            }
        });
        b5.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                op1.setText("");
                op2.setText("");
                txtresult.setText("0.0");
                op1.requestFocus();
            }
        });
    }
}