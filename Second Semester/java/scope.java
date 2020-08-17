class Scope
{
	int a=12;
	static int m=23;
	public static void main(String args[])
	{
		Scope s;
		s=new Scope();
		int length=5,breadth=10;
		{
			int x=10;
		System.out.println(length+breadth);
		System.out.println(x);
		System.out.println(s.a);
		System.out.println(m);
		}
		//System.out.println(x);
		System.out.println(length);
	}
}
