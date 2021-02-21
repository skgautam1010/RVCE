class ABC
{

	ABC getA()
	{
		return this;
	}
	public void msg()
	{
		System.out.println("Hello RVCE");
	}
	
}


public class This5
{
	public static void main(String[] args)
	{
		ABC a = new ABC();
		a.getA().msg();
		
		
	}
}
