import mypackage.Geometry;
import java.util.*;
class Geometrical
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		while (true)
		{
			Geometry g1=new Geometry();
			System.out.println("1-->area of circle\n2-->area of triangle");
			System.out.println("3-->area of rectangle\n4-->area of square\n5-->area of rhombus\n6-->exit");
			System.out.println("enter your choice:");
			int ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					System.out.print("enter the radius: "); 
					float r=sc.nextFloat();
					float area1=g1.circle(r);
					System.out.println("the area of circle is: "+area1);
					break;
				case 2:
					System.out.print("enter the base for triangle: ");
					int base=sc.nextInt();
					System.out.print("enter the height foe triangle: ");
					int height=sc.nextInt();
					int area2=g1.triangle(base,height);
					System.out.println("the area of triangle is: "+area2);
					break;
				case 3:
					System.out.print("enter the length and breadth for rectangle: ");
					int length=sc.nextInt();
					int breadth=sc.nextInt();
					int area3=g1.rectangle(length,breadth);
					System.out.println("the area of rectangle: "+area3);
					break;
				case 4:
					System.out.print("enter the side for square: ");
					int side=sc.nextInt();
					int area4=g1.square(side);
					System.out.println("the area of square: "+area4);
					break;
				case 5:
					System.out.print("enter the first diagnol for rhombus: ");
					float d1=sc.nextFloat();
					System.out.print("enter the second diagonal: ");
					float d2=sc.nextFloat();
					float area5=g1.rhombus(d1,d2);
					System.out.println("the area of rhombus: "+area5);
					break;
				case 6:
					System.exit(0);
				default:
					System.out.println("wrong use input");
			}
		}
	}
}
