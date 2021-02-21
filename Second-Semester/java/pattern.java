import java.util.*;
class Pattern
{
	public static void main(String args[])
	{
		System.out.println("1-->first pattern\n2-->second pattern\n3-->third pattern\n4-->exit");
		System.out.println("enter your choice");
		Scanner sc=new Scanner(System.in);
		int ch=sc.nextInt();
		switch(ch)
		{
			case 1:
				int i,n,j,num,a;
				System.out.println("enter the size :  n");
				n=sc.nextInt();
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=i;j++)
					{
						System.out.print("*");
					}
					System.out.println();
				}
				break;
		}
	}
}
