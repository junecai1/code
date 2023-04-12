package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ImageView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {
    int image[]={
            R.drawable.sp4,
            R.drawable.sp2,
            R.drawable.sp3,
            R.drawable.sp4,
            R.drawable.sp5
    };
    ImageView imageContainer;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
//        View img=findViewById(R.id.imageView);
        imageContainer =(ImageView) findViewById(R.id.imgcontainer);
        Runnable imgRun = new Runnable() {
            @Override
            public void run() {
                Random rd = new Random();
                int index = rd.nextInt(5);
                imageContainer.setBackgroundResource(image[index]);

            }
        };
        new Thread(new Runnable() {
            @Override
            public void run() {
                boolean TRUE = true;
                while(TRUE){
                    try {
                        Thread.sleep(1000);
                    } catch (InterruptedException e){
                        e.printStackTrace();
                    }
                    MainActivity.this.runOnUiThread(imgRun);
//                    Log.d("切换","qiewanwancheng");
                }
            }
        }).start();
    }
}