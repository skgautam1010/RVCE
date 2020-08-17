import java.util.*;
class Nesting
{
	int a,b;
	Nesting(int x,int y)
	{
		a=x;
		b=y;
	}
	int largest()
	{
		if(a>=b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	void display()
	{
		int large=largest();
		System.out.println("largest number is: "+large);
	}
}
class Nest
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int m=sc.nextInt();
		int n=sc.nextInt();
		Nesting n1=new Nesting(m,n);
		n1.display();
	}
}

