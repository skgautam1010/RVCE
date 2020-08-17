import java.util.Scanner;
class Addition
{
	public static void main(String args[])
	{
		int a,b,result;
		Scanner sc=new Scanner(System.in);
		System.out.print("enter first number: ");
		a=sc.nextInt();
		System.out.print("enter second number: ");
		b=sc.nextInt();
		result=a+b;
		System.out.println();
		System.out.println("result="+result);
	}
}

