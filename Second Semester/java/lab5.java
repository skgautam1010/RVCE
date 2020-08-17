import java.lang.Exception;
import java.util.*;
class Myexception extends Exception
{
	Myexception(String s)
	{
		super(s);
	}
}
class TestException
{
	void division() throws Myexception
	{
		Scanner s=new Scanner(System.in);
		float a,b;
		float c;
		System.out.println("enter the first value: ");
		a=s.nextFloat();
		System.out.println("enter second number: ");
		b=s.nextFloat();
		c=a/b;
		if(c<1)
		{
			throw new Myexception("number is too small");
		}
		System.out.println("value is: "+c);
	}
}
class lab5
{
	public static void main(String args[])
	{
		TestException t=new TestException();
		try
		{
			t.division();
		}
		catch(Myexception e)
		{
			System.out.println(e.getMessage());
		}
	}
}
