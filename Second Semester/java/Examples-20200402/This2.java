class ABC
{
	int i;
	int j;
	public void Method1() 
	{
		System.out.println(" This is Method - 1");
	}
	public void Method2() 
	{
		
		this.Method1();     // “this” keyword can be used inside Methods to call another Method from same Class.
	}
}


public class This2
{
	public static void main(String[] args)
	{
		ABC a = new ABC();
		a.Method2();
		
	}
}
