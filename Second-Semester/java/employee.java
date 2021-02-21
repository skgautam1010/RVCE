import java.util.*;
class Employee
{
	public static void main(String args[])
	{
		long t1=System.currentTimeMillis();
		System.out.println(t1);
		Scanner sc=new Scanner(System.in);
		System.out.print("enter the basic pay: " );
		double basic_pay=sc.nextDouble();
		double da=(30/100)*basic_pay;
		double hra=(15/100)*basic_pay;
		double pf=(12.5/100)*basic_pay;
		double gross_pay=basic_pay+da+hra;
		double net_sal=gross_pay-pf;
		System.out.println("gross pay of employee: "+gross_pay);
		System.out.println("net_pay of employee: "+net_sal);
		long t=System.currentTimeMillis();
		System.out.println(t);
		System.out.println("the time complexity is: "+(t-t1));
	}
}
