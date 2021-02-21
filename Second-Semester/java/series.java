import java.util.*;
import java.lang.Math;
class Series
{
	public static void main(String args[])
	{
		while (true)
		{
			System.out.println("1-->1st series\n2-->2nd series\n3-->exit");
			System.out.println("enter your choice");
			Scanner sc=new Scanner(System.in);
			int ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					double a,n,sum=0;
					System.out.println("enter the value for a and n");
					a=sc.nextInt();
					n=sc.nextInt();
					for(int i=1;i<=n;i++)
					{
						sum = sum+a*(Math.pow(-1,(i-1))*(1/i));
					}
					System.out.println("sum="+sum);
					break;
				case 2:
					double j,b,m,s=0;
					System.out.println("enter the value for a and n");
					b=sc.nextInt();
					m=sc.nextInt();
					for(j=1;j<=m;j++)
					{
						s = s + (Math.pow(j,j)/Math.pow(j,(j-1)));
					}
					System.out.println("sum="+s);
					break;
				case 3:
					System.exit(0);
				default:
					System.out.println("wrong input");
			}
		}
	}
}


