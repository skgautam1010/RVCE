package com.example.sms;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.telephony.SmsManager;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    Button btn;
    EditText num_text,msg_txt;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btn=findViewById(R.id.button1);
        num_text=findViewById(R.id.mob_num);
        msg_txt=findViewById(R.id.txt_message);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    SmsManager sms = SmsManager.getDefault();
                    sms.sendTextMessage(num_text.getText().toString(), null, msg_txt.getText().toString(), null, null);
                    Toast.makeText(getApplicationContext(),"Sms Sent Succesfully",Toast.LENGTH_LONG).show();
                }
                catch (Exception e)
                {
                    Toast.makeText(getApplicationContext(),"Sms Failes to send, "+ "Please Try again",Toast.LENGTH_LONG).show();
                }
            }
        });

    }
}