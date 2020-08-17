class Scope
{
	static int a = 5;   // class Variable
	int b = 10;         // Instance Varibale
	public static void main(String arg[]) 
	{ 	
		int c = 10; // Local Variables 
		
		System.out.println("The value of a == "+a);
		
		Scope S ;     // Reference Variable 
		S = new Scope();    // Object 
		System.out.println("The value of b == "+S.b);
		
		
		
	}
}


