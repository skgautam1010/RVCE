class Sample
{
	public static void main(String[] args)
	{
		int x,z,k=7;
		char a='A';
		x=Integer.parseInt(args[0]);
		z=Integer.parseInt(args[1]);
		float y=(float)x;
		float m=(float)z;
		int b=(int)a;
		double result=m+y;
		result++;
		System.out.println("result="+result);
		System.out.println(y);
		System.out.println(m);
		System.out.println(z<=y);
		System.out.println(x==m);
		System.out.println(b>x || x==m);
		 System.out.println(a);
		System.out.println(x>z?true:false);
		Sample s=new Sample();
		System.out.println(s instanceof Sample);
		//System.out.println(s.k);


	}
}

