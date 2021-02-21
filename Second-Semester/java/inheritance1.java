class Mathematics
{
	int z;
	public void add(int x,int y)
	{
		z=x+y;
		System.out.println(z);
	}
	public void sub(int x,int y)
	{
		z=x-y;
		System.out.println(z);
	}
}
class Operations extends Mathematics
{
	public void mul(int x,int y)
	{
		z=x*y;
		System.out.println(z);
	}
}
class Inheritance1
{
	public static void main(String args[])
	{
		int a=20,b=10;
		Operations op=new Operations();
		op.add(a,b);
		op.sub(a,b);
		op.mul(a,b);
	}
}

