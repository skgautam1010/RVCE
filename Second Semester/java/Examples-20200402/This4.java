class ABC
{
	int i = 10;
	void method() 
	{
		method1(this);
	}
	void method1(ABC t) 
	{
		System.out.println("I= " + t.i);
	}
}


public class This4
{
	public static void main(String[] args)
	{
		ABC a = new ABC();
		a.method();
		
	}
}

