class Perimeter
{
	int length;
	int breadth;
	Perimeter()
	{
		length=0;
		breadth=0;
	}
	Perimeter(int x,int y)
	{
		length=x;
		breadth=y;
	}
	void cal_perimeter()
	{
		int p;
		p=2*(length+breadth);
		System.out.print("the perimeter of rectangle is: "+p);
		System.out.println();
	}
}
class Main
{
	public static void main(String args[])
	{
		Perimeter p1=new Perimeter();
		Perimeter p2= new Perimeter(5,10);
		p1.cal_perimeter();
		p2.cal_perimeter();
	}
}

