import java.io.*;
import java.lang.*;
class Student
{
	int no=0;
	String name="";
	String address="";
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	Student(int no,String name,String address)
	{
		try
		{
			this.no=no;
			this.name=name;
			this.address=address;
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
	public void getdata1()
	{
		try
		{
			System.out.println("ENTER the rollno::");
			no=Integer.parseInt(br.readLine());
			System.out.println("ENTER the NAME::");
			name=(br.readLine());
			System.out.println("ENTER the Address::");
			address=(br.readLine());
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}

}
class Mark extends Student
{
	int m1=0;
	int m2=0;
	int m3=0;
	Mark(int no,String name,String address,int m1,int m2,int m3)
	{
		super(no,name,address);
		try
		{
			//super(no,name,address);
			this.m1=m1;
			this.m2=m2;
			this.m3=m3;
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
	public void getdata2()
	{
		try
		{
			super.getdata1();
			System.out.println("Enter the First MArks::");
			m1=Integer.parseInt(br.readLine());
			System.out.println("Enter the Second MArks::");
			m2=Integer.parseInt(br.readLine());
			System.out.println("Enter the Third MArks::");
			m3=Integer.parseInt(br.readLine());
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}

}
class Result extends Mark
{
	int total=0;
	float per=0.0f;
	Result(int no,String name,String address,int m1,int m2,int m3,int total,float per)
	{
		super(no,name,address,m1,m2,m3);
		try
		{
			//super(no,name,address,m1,m2,m3);
			this.total=total;
			this.per=per;
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
	public void calculate()
	{
		try
		{
			super.getdata2();
			total=m1+m2+m3;
			per=(total/300)*100;
		}
		catch(Exception e)
		{
			System.out.println(e);
		}

	}
	public void display()
	{
		try
		{
			System.out.println("TOTAL IS::"+total);
			System.out.println("PERCENATGE IS::"+per);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}

	}

}
class Inheritance
{
	public static void main(String args[])throws IOException
	{
		Result r1=new Result(0," "," ",0,0,0,0,0);
		r1.calculate();
		r1.display();
	}
}

