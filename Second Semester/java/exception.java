import java.util.*;
class Exceptionhandle
{
	public static void main(String args[])
	{
		int a,b,result;
		Scanner sc=new Scanner(System.in);
		try
		{
			while (true)
			{
			System.out.println("enter first number: ");
			a=sc.nextInt();
			System.out.println("enter second number: ");
			b=sc.nextInt();
			System.out.println("1-->addition\n2->multiplication\n3->division\n4-->exit\n");
			int ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					result=a+b;
					System.out.println("the result is: "+result);
					break;
				case 2:
					result=a*b;
					System.out.println("the result is: "+result);
					break;
				case 3:
					result=a/b;
					System.out.println("the resultis : "+result);
					break;
				case 4:
					System.exit(0);
			}
			}
		}
		catch(ArithmeticException e)
		{
			System.out.println("arithmetic exception occured");
		}
		catch(Exception ae)
		{
			System.out.println("exception is: "+ae.toString());
		}
	}
}

