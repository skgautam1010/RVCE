//Interface implementation
import java.util.*;
class Student
{
	int usn;
	void getnumber(int n)
	{
		usn=n;
	}
	void putnumber()
	{
		System.out.println("roll number is: "+usn);
	}
}
class Test extends Student
{
	float sub1;
	float sub2;
	void getmarks(float m1,float m2)
	{
		sub1=m1;
		sub2=m2;
	}
	void putmarks()
	{
		System.out.println("the marks of subject 1: "+sub1);
		System.out.println("the marks of subject 2: "+sub2);
	}
}
interface Sports
{
	float s1=64.0F;
	void putsports();
}
//Extra Curricular Activities
interface Eca
{
	float ec=82.0F;
	void puteca();
}
class Result extends Test implements Sports,Eca
{
	float total;
	public void putsports()
	{
		System.out.println("sports marks is: "+s1);
	}
	public void puteca()
	{
		System.out.println("Extra curricula activities: "+ec);
	}
	void display()
	{
		total=sub1+sub2+ec+s1;
		putnumber();
		putmarks();
		putsports();
		puteca();
		System.out.println("total marks: "+total);
	}
}
class Hybrid
{
	public static void main(String args[])
	{
		Result r1=new Result();
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the roll number: ");
		int a=sc.nextInt();
		System.out.println("enter marks for subject 1: ");
		float marks1=sc.nextFloat();
		System.out.println("enter marks for subject 2: ");
		float marks2=sc.nextFloat();
		r1.getnumber(a);
		r1.getmarks(marks1,marks2);
		r1.display();
	}
}

