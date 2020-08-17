import java.util.*;

class A
{
	public void methodA()
   	{
		System.out.println("Base class method");
   	}
}

class B extends A
{
	public void methodB()
	{
		super.methodA();
		System.out.println("Child class method");
   	}
}
class X
{
	public void methodX()
	{
		System.out.println("parent class method");
   	}
}
class Y extends X
{
	public void methodY()
	{
		super.methodX();
		System.out.println("child 1 class method");
	}
}
class Z extends Y
{
	public void methodZ()
   	{
		super.methodY();
     		System.out.println("method child 2 inheriting child one");
   	}
}

// Hierarchical Inheritance

class A1
{
	public void methodAa()
	{
		System.out.println("method of parent Class ");
   	}
}
class B1 extends A1
{
	public void methodB()
   	{
		super.methodAa();
      		System.out.println("method of child 1 class");
   	}
}
class C1 extends A1
{
	public void methodC()
  	{
		methodAa();
		System.out.println("method of Child 2 class ");
  	}
}

class Inheritance
{
	public static void main(String args[])
	{
		int ch=0;
		Scanner ss=new Scanner(System.in);
		while(true)
		{
			System.out.println("1 Single Inheritance");
			System.out.println("2 Multilevel Inheritance");
			System.out.println("3 Hierachical Inheritance");
			System.out.println("4 Exit");
			System.out.println("Enter your Choice");
			ch=ss.nextInt();
			switch(ch)
			{
				case 1:B objp=new B();
					objp.methodB();
					break;

				case 2:Z objk = new Z();
					objk.methodZ();
					break;

				case 3: B1 obj1 = new B1();
     					C1 obj2 = new C1();
					obj1.methodB();
					obj2.methodC();
					break;
				case 4:System.exit(0);break;
			}
		}
	}
}

