import java.lang.*;
import java.util.*;
import java.io.*;
public class SortArray
{
	public static void main(String[] args)
	{
		int[] array={12,15,11,13,9,25};
		for(int i=0;i<array.length;i++)
		{
			if(array[i]>array[i+1])
			{
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
		for(int i=0;i<array.length;i++)
		{
			System.out.println(array[i]);
		}
	}
}
		/*int[]array={1,4,3,6,8,2,5};
		int what=array[0];
		for(int index=0;index<array.length;index++)
		{
			if(array[index]<what)
			{
				what=array[index];
			}
			System.out.println(what);
		}
		/*xyz[5]=50;
		for(int i=0;i<6;i++)
		{
		System.out.println(xyz[i]);
		}
		//int arr[]={1,3,5,7,9};
		//System.out.println(arr[3]);
		/* x=8;y=0;z=1;
		if(x)
			if(y)
				z=10;
			else
				z=0;*/
	

		/*int i=k+2;
		System.out.println(i);
		/*if(p<0)||(q<0)
		System.out.println("sign is negative");
		/*if(code>1);
		a=b+c;
		else
		a=0;
		/*int x,y,z;
		if(x+y=z && y>0)
		System.out.println();
		/*double a=963.87;
		int b=200;
		byte x=(byte) a;
		byte y=(byte) b;
		System.out.println(x+" "+y);
		for(int i=0;true;i++)
		{
			System.out.println("Hello");
			break;
		}*/
		/*System.out.println(2*(5/2+5/2));
		System.out.println(2*5/2+2*5/2);
		System.out.println(2*(5/2));
		System.out.println(2*5/2);*/
		/*for(int x=0;x<5;x++)
		{
			int y=-1;
			System.out.println("y is: "+y);
			y=100;
			System.out.println("y is now:"+y);
		}
		int x=10;
		int y=20;
		{
			System.out.print(x+","+y);
		}
		{
			x=15;
			System.out.print("-"+x+","+y);
		}
		System.out.print("-"+x+","+y);
		char ch1='D';
		char ch2=84;
		ch2++;
		ch1++;
		System.out.println(ch1+" "+ch2);*/



