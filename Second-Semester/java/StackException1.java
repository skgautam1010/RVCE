import java.util.Scanner;
import java.lang.Exception;
class MyException1 extends Exception
{
	MyException1(String s)
	{
		super(s);
	}
}
class Stack1
{
	Scanner sc=new Scanner(System.in);
	int top=-1;
	int n=sc.nextInt();
         int arr[]=new int[n];
	int newarr[]=new int[n*2];
         /*if(arr.length==n)
                {
                        int newarr[]=new int[n*2];
                        System.arraycopy(arr,0,newarr,0,n);
                }*/

	void push(int v)
	{
		if(top==n-1)
		{
			System.arraycopy(arr,0,newarr,0,n);
			//throw new MyException("stack overflow");
		}
		else
		{
			top++;
			arr[top]=v;
			System.out.println("the element"+" "+v+" "+"has been inserted at position"+" "+top);
		}
	}
	void pop() throws MyException1
	{
		if(top==-1)
		{
			throw new MyException1("stack underflow");
		}
		else
		{
			System.out.println("the element"+" "+arr[top]+" "+"has been removed from position"+" "+top);
			top--;
		}
	}
	void display() throws MyException1
	{
		if(top==-1)
		{
			throw new MyException1("stack is empty");
		}
		else
		{
			System.out.println("the elements of stack are: ");
			for(int i=top;i>-1;i--)
			{
				System.out.println(arr[i]);
			}
		}
	}
}
class StackException1
{
	public static void main(String args[])
	{
		Stack s1=new Stack();
		Scanner sc=new Scanner(System.in);
		int ch=0;
		/*System.out.print("enter the array size: ");
		int n=sc.nextInt();
		int arr[]=new int[n];
		if(arr.length==n)
		{
			int newarr[]=new int[n*2];
			System.arraycopy(arr,0,newarr,0,n);
		}*/
		while(true)
		{
			System.out.println("1-->PUSH\n2-->POP\n3-->DISPLAY\n4-->EXIT");
			System.out.print("Enter your choice:");
			ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					//try
					//{
						System.out.print("enter the value to be pushed inside stack: ");
						int value=sc.nextInt();
						s1.push(value);
					//}
					//catch (MyException1 e)
					//{
					//	System.out.println(e.getMessage());
					//}
					break;
				case 2:
                                        try
                                        {
                                        	s1.pop();
                                        }
                                        catch (MyException1 e)
                                        {
						 System.out.println(e.getMessage());
					}
					break;
                                case 3:
                                        try
                                        {
                                        	s1.display();
                                        }
                                        catch (MyException1 e)
                                        {
                                        	System.out.println(e.getMessage());
                                        }
					break;
				case 4:
					System.exit(0);

				default:
					System.out.println("Wrong choice ");

			}
		}
	}
}

