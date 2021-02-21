// Demonstrate casts.
class ImplicitTypeCast 
{
	public static void main(String args[]) 	
	{
		char c = 'a';
		int b = c;
		int x =10; // occupies 4 bytes
		double y =x; // occupies 8 bytes, Implicit coversion
		System.out.println(x);
		System.out.println(y); // prints 10.0
		System.out.println(b); // prints 10.0
	}
}
