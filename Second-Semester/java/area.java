class Area
{
	public static void main(String args[])
	{
		float length,breadth,area;
		length=6;
		breadth=3;
		Room a=new Room();
		System.out.println(a.b);
		area=a.getdata(length,breadth);
		System.out.println("area="+area);
	}
}
class Room
{
	int b=5;
	float getdata(float length,float breadth)
	{
		float ar;
		ar=length*breadth;
		return ar;
	}
}

