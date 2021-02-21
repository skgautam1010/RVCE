import java.util.*;
class Putget
{
	public int number;
	public boolean status=true;//mutex
	public synchronized void put(int i)
	{
		while(status==false)
		{
			try
			{
				wait();
			}
			catch(Exception e)
			{
				System.out.println("Exception: "+e);
			}
		}
		number=i;
		status=false;
		notifyAll();
	}
	public synchronized int get()
	{
		while(status==true)
		{
			try
			{
				wait();
			}
			catch(Exception e)
			{
				System.out.println("Exception: "+e);
			}
		}
		status=true;
		notifyAll();
		return number;
	}
}
class Producer extends Thread
{
	Putget pg1;
	int number;
	int n1;
	Producer(Putget pg,int i,int n)
	{
		pg1=pg;
		number=i;
		n1=n;
	}
	public void run()
	{
		for(int i=1;i<=n1;i++)
		{
			pg1.put(i);
			System.out.println("Producer produces item: "+i);
			try
			{
				sleep(1000);
			}
			catch(Exception e)
			{
				System.out.println("Exception: "+e);
			}
		}
	}
}
class Consumer extends Thread
{
	Putget pg1;
	int number;
	int n1;
	Consumer(Putget pg,int n)
	{
		pg1=pg;
		n1=n;
	}
	public void run()
	{
		for(int i=1;i<=n1;i++)
		{
			number=pg1.get();
			System.out.println("Consumer consumes item: "+number);
			try
			{
				sleep(1000);
			}
			catch(Exception e)
			{
				System.out.println("Exception: "+e);
			}
		}
	}
}

class Producerconsumer
{
	public static void main(String args[])
	{
		System.out.print("enter the number of item to be produced : ");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Putget pg=new Putget();
		new Producer(pg,5,n).start();
		new Consumer(pg,n).start();
	}
}
