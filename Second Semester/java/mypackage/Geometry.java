package mypackage;
public class Geometry
{
	public float circle(float r)
	{
		final float pi=3.14F;
		float ar=pi*r*r;
		return ar;
	}
	public int square(int side)
	{
		int ar=side*side;
		return ar;
	}
	public int triangle(int base,int height)
	{
		int ar=(base*height)/2;
		return ar;
	}
	public int rectangle(int length,int breadth)
	{
		int ar=length*breadth;
		return ar;
	}
	public float rhombus(float diag1,float diag2)
	{
		float ar=(diag1*diag2)/2;
		return ar;
	}
}


