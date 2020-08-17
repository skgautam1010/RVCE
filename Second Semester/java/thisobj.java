class Abc
{
	int i,j;
	Abc(int i,int j)
	{
		this.i=i;
		this.j=j;
	}
	void show()
	{
		System.out.println("value of i="+i);
		System.out.println("value  of j="+j);
	}
}
class This1
{
	public static void main(String args[])
	{
		Abc a=new Abc(5,10);
		//a.assign(10,15);
		a.show();
	}
}

