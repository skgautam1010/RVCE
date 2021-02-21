class A extends Thread
{
	public void run()
	{
		System.out.println("thread run method");
	}
	public static void display()
	{
		System.out.println("from 1 to 10:");
		for(int i=1;i<=10;i++)
		{
			System.out.println(i);
		}
	}
}
/*class Priorityexample
{
	public static void main(String args[])
	{
		Thread t1=new Thread(new A(),"Thread-1");
		Thread t2=new Thread(new A(),"Thread-2");
		Thread t3=new Thread(new A(),"Thread-3");
		t1.setPriority(Thread.MIN_PRIORITY);
		t2.setPriority(Thread.MAX_PRIORITY);
		t3.setPriority(Thread.NORM_PRIORITY);
		System.out.println("thread 1 priority:"+t1.getPriority());
		System.out.println("thread 2 priority:"+t2.getPriority());
		System.out.println("thread 3 priority:"+t3.getPriority());
		t1.start();
		t2.start();
		t3.start();
		A.display();
	}
}*/
