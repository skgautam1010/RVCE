public class Garbage
{
	protected void finalize()
	{
		System.out.println("garbage collected and deleted");
	}
	public static void main(String args[])
	{
		Garbage g1=new Garbage();
		Garbage g2=new Garbage();
		System.out.println("garbage collected 1");
		g1=null;
		g2=null;
		System.gc();
		System.out.println("Garbage collected 2");
	}
}
