import java.util.Scanner;
interface Rectangle
{
	float areaRect(float x,float y);
}
interface Triangle
{
	float areaTri(float x,float y);
}
class Area implements Rectangle,Triangle
{
	public float areaTri(float x, float y)
	{
		return (x*y)/2;
	}
	 public float areaRect(float x, float y)
	{
		return  (x*y);
	}
	public static void main(String args[])
	{
		int ch;
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			System.out.println("1 Area of rectangle");
			System.out.println("2 Area of triangle");
			System.out.println("3 Exit");
			System.out.println("Enter your Choice");
			ch=sc.nextInt();
			Area a=new Area();
			switch(ch)
			{
				case 1:
				System.out.println("enter the length and breadth for rectangle");
				float w = sc.nextFloat();
				float l = sc.nextFloat();
				System.out.println("area of rectangle = "+a.areaRect(w,l));
				break;

				case 2:
				System.out.println("enter the base and height for triangle");
				float b = sc.nextFloat();
				float h = sc.nextFloat();
				System.out.println("area of triangle = "+a.areaTri(b,h));
				break;
				case 3: System.exit(0);
				break;
			}
		}
	}	
}
