class Abc
{
	int i;
	Abc()
	{
		System.out.println("this is a paramaterized constructor with zero parameter");
	}
	void abc(int i)
	{
		this.i=i;
		System.out.println("constructor with one parameter"+" "+i);
	}
	Abc(int i,int j)
	{
		this();
		this.abc(i);
		System.out.println("constructor with two parameters"+""+i+""+j);
	}
}
class This3
{
	public static void main(String args[])
	{
		Abc a=new Abc(10,12);
	}
}

