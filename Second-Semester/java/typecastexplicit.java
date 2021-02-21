class Typecast
{
	public static void main(String args[])
	{
		char c='a';
		double d=3.23;
		int a=21;
		byte b;
		b=(byte) d;
		System.out.println("value of d="+d);
		System.out.println("value of b="+b);
		b=(byte)a;
		System.out.println("value of b="+b);
		int m=c;
		System.out.println("value of m="+m);
	}
}
