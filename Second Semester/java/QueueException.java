import java.util.Scanner;
class Excq extends Exception
	{
	public Excq(String s)
		{
		super(s);
		}
	}
class Queue
	{
	Scanner sc=new Scanner(System.in);
	int rear=-1,front=-1;
	//int size;
	//System.out.print("Enter the array size:");
	//int size=sc.nextInt();
	int arr[]=new int[5];

	public void push() throws Excq
		{
			if((rear+1)>4)
				throw new Excq("Queue overflow");
			else
			{
			if(front==-1)
			front=0;
			System.out.println("Enter the element:");
			rear +=1;
			arr[rear]=sc.nextInt();
			}
		}
	public void pop() throws Excq
		{
			if(front==-1 || front>rear)
			{
				front=-1;
				throw new Excq("Queue underflow");
				//front=-1;
			}
			else
			{
			System.out.println("Element deleted is:"+arr[front]);
			front++;
			}
		}
	public void display() throws Excq
		{
			if(front==-1 ||rear==-1 || front>rear)
				throw new Excq("Queue is empty");
			else
			{
			for(int i=front;i<=rear;i++)
				{
				System.out.print(" "+arr[i]);
				}
				System.out.println();
			}
		}
	}
class lab4
	{
	public static void main(String args[])
		{
		Queue q=new Queue();
		//System.out.print("Enter the array size:");
		Scanner sc=new Scanner(System.in);
		int ch=0;
		while(true)
			{
			System.out.println("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
			System.out.print("Enter your choice:");
			ch=sc.nextInt();
			switch(ch)
				{
				case 1:
					try
					{
					q.push();
					}
					catch (Excq e)
					{
					System.out.println(e.getMessage());
					}break;

				case 2:
                                        try
                                        {
                                        q.pop();
                                        }
                                        catch (Excq e)
                                        {
					 System.out.println(e.getMessage());
					}break;
                                case 3:
                                        try
                                        {
                                        q.display();
                                        }
                                        catch (Excq e)
                                        {
                                        System.out.println(e.getMessage());
                                        }break;

				case 4:System.exit(0);

				default:System.out.println("Wrong choice ");break;

				}
			}
		}
	}

