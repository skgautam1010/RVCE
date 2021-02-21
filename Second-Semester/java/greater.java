import java.util.Scanner;
class Greater
{
	public static void main(String args[])
	{
		int a,b,c;
		Scanner sc=new Scanner(System.in);
		System.out.print("enter first number: ");
		a=sc.nextInt();
		System.out.print("enter second number: ");
		b=sc.nextInt();
		System.out.print("enter third number: ");
		c=sc.nextInt();
		if(a>b & b>c)
		{
			System.out.println("a is greatest");
		}
		else if(b>c)
		{
			System.out.println("b is greatest");
		}
		else
		{
			System.out.println("c is greatest");
		}
	}
}

