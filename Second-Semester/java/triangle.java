import java.util.*;
class Triangle
{
	public static void main(String args[])
	{
		long t=System.currentTimeMillis();
		System.out.println("time before execution"+t);
		double a,b,c,d,e,f;
		System.out.println("enter the first side: ");
		Scanner sc=new Scanner(System.in);
		a=sc.nextDouble();
		System.out.println("enter the second side:");
		b=sc.nextDouble();
		System.out.println("enter the third side: ");
		c=sc.nextDouble();
		System.out.println("enter the first angle: ");
                d=sc.nextDouble();
		System.out.println("enter the second angle: ");
                e=sc.nextDouble();
		System.out.println("enter the third ange: ");
                f=sc.nextDouble();

		if(a+b<c && (d+e+f)!=180)
		{
			System.out.println("not a traingle");
		}
		else if(a==b && b==c && c==a && d==60 && e==60 && f==60)
		{
			System.out.println("equilateral traingle");
		}
		else if(a==b || b==c || c==a && d==e || e==f || f==d)
		{
			System.out.println("isosceles traingle");
		}
		else
		{
			System.out.println("scalene traingle");
		}
		long t1=System.currentTimeMillis();
                System.out.println("time after execution"+t1);
		System.out.println("final time: "+(t1-t));

	}
}

