class ABC
{

	public ABC()
	{
		System.out.println("This is ABC Zero Parameter Constructor ");
	}
	public ABC(int i)
	{
		this();
		System.out.println("This is ABC One Parameter Constructor ");
		System.out.println("The value of  i == "+i);
	}
	public ABC(int i, int j)
	{
		this(i);
		System.out.println("This is ABC Two Parameter Constructor ");
		System.out.println("The value of  i == "+i);
		System.out.println("The value of  j == "+j);
	}
}


public class This3
{
	public static void main(String[] args)
	{
		ABC a = new ABC(5,10);
		
		
	}
}
