package com.example.canvas;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.os.Bundle;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;

import java.util.ArrayList;


public class MainActivity extends Activity {

    View mView;
    private Paint mPaint;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        LinearLayout layout=findViewById(R.id.myDrawing);
        mView=new DrawingView(this);
        layout.addView(mView,new ViewGroup.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT,LinearLayout.LayoutParams.MATCH_PARENT));
        init();
    }

    private void init() {
        mPaint=new Paint();
        mPaint.setDither(true);
        mPaint.setColor(0xFFFFFF00);
        mPaint.setStyle(Paint.Style.STROKE);
        mPaint.setStrokeJoin(Paint.Join.ROUND);
        mPaint.setStrokeCap(Paint.Cap.ROUND);
        mPaint.setStrokeWidth(3);
    }
    class DrawingView extends View{
        private Path path ;
        private  Bitmap bitmap;
        private Canvas canvas;
        public DrawingView(Context context){
            super(context);
            path=new Path();
            bitmap=Bitmap.createBitmap(820,480,Bitmap.Config.ARGB_8888);
            canvas=new Canvas(bitmap);
            this.setBackgroundColor(Color.BLACK);
        }
        private ArrayList<PathWithPaint> graphics1=new ArrayList<PathWithPaint>();

        @Override
         public boolean onTouchEvent(MotionEvent event){
            PathWithPaint pp=new PathWithPaint();
            canvas.drawPath(path,mPaint);
            if(event.getAction()==MotionEvent.ACTION_DOWN){
                path.moveTo(event.getX(),event.getY());
                path.lineTo(event.getX(),event.getY());
            }
            else if(event.getAction()==MotionEvent.ACTION_MOVE){
                path.lineTo(event.getX(),event.getY());
                pp.setPath(path);
                pp.setmPaint(mPaint);
                graphics1.add(pp);
            }
            invalidate();
            return true;
        }
        @Override
         protected void onDraw(Canvas canvas){
            super.onDraw(canvas);
            if(graphics1.size()>0) {
                canvas.drawPath(
                        graphics1.get(graphics1.size()-1).getPath(),
                        graphics1.get(graphics1.size() - 1).getmPaint());
            }
        }
    }
}
