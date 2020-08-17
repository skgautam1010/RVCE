import java.util.Scanner;
class MyException extends Exception
{
	MyException(String s)
	{
		super(s);
	}
}
class Stack
{
	Scanner sc=new Scanner(System.in);
	int top=-1;
	void push(int arr[],int n) throws MyException
	{
		if(top==n-1)
		{
			throw new MyException("stack overflow");
		}
		else
		{
			System.out.print("enter the value to be pushed inside stack: ");
			int value=sc.nextInt();
			top++;
			arr[top]=value;
			System.out.println("the element"+" "+value+" "+"has been inserted at position"+" "+top);
		}
	}
	void pop(int arr[]) throws MyException
	{
		if(top==-1)
		{
			throw new MyException("stack underflow");
		}
		else
		{
			System.out.println("the element"+" "+arr[top]+" "+"has been removed from position"+" "+top);
			top--;
		}
	}
	void display(int arr[]) throws MyException
	{
		if(top==-1)
		{
			throw new MyException("stack is empty");
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
class StackException
{
	public static void main(String args[])
	{
		Stack s1=new Stack();
		Scanner sc=new Scanner(System.in);
		int ch=0;
		System.out.print("enter the array size: ");
		int n=sc.nextInt();
		int arr[]=new int[n];
		while(true)
		{
			System.out.println("1-->PUSH\n2-->POP\n3-->DISPLAY\n4-->EXIT");
			System.out.print("Enter your choice:");
			ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					try
					{
						s1.push(arr,n);
					}
					catch (MyException e)
					{
						System.out.println(e.getMessage());
					}
					break;
				case 2:
                                        try
                                        {
                                        	s1.pop(arr);
                                        }
                                        catch (MyException e)
                                        {
						 System.out.println(e.getMessage());
					}
					break;
                                case 3:
                                        try
                                        {
                                        	s1.display(arr);
                                        }
                                        catch (MyException e)
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

