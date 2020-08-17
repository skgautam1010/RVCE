import java.util.*;
import java.lang.Math;
class Rectangle
{
	public static void main(String args[])
	{
		int length,breadth,ch;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the length: ");
		length=sc.nextInt();
		System.out.println("enter breadth: ");
		breadth=sc.nextInt();
		while (true)
		{
			System.out.println("1-->area of rectangle\n2-->perimeter of rectangle\n3-->diagonal of rectangle\n4-->exit");
			ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					int ar=length*breadth;
					System.out.println("the area of rectangle="+ar);
					break;
				case 2:
					int peri=2*(length+breadth);
					System.out.println("perimeter of rectangle: "+peri);
					break;
				case 3:
					int diag=Math.sqrt(length+breadth);
					System.out.println("diagonal of rectangle="+diag);
					break;
				case 4:
					System.exit(0);
			}
		}
	}
}
