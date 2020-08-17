class ABC
{
	int i;
	int j;
	public void Assign(int i, int j) 
	{
		this.i = i;   // this.i refer to  class varibale i
		this.j = j;   // this.j refer to  class varibale j
	}
	public void show() 
	{
		System.out.println("The Value of i=== "+i);
		System.out.println("The Value of j=== "+j);
	}
}


public class This1
{
	public static void main(String[] args)
	{
		ABC a = new ABC();
		a.Assign(5,6);
		a.show();
		
	}
}

