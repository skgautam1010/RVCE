import java.util.*;
class Rectangle
{
	void area(int length)
	{
		int ar=length*length;
		System.out.println("area of square="+ar);
	}
	void area(int x,int y)
	{
		int ar;
		ar=x*y;
		System.out.println("area of rectangle="+ar);
	}
}
class MainArea
{
	public static void main(String []args)
	{
		int a,b;
		Rectangle r1= new Rectangle();
		Scanner sc= new Scanner(System.in);
		System.out.println("enter the value for a: ");
		a=sc.nextInt();
		System.out.println("enter the value for b: ");
		b=sc.nextInt();
		r1.area(a);
		r1.area(a,b);
	}
}

