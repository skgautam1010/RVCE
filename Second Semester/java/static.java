class Mathoperation
{
	static double mul(double x, double y)
	{
		return x*y;
	}
	static double div(double x,double y)
	{
		return x/y;
	}
}
class Mathapp
{
	public static void main (String args[])
	{
		double a=Mathoperation.mul(2.4,6.9);
		double b=Mathoperation.div(a,1.2);
		System.out.println("value of a="+a+ " "+"value of b="+b);
	}
}

