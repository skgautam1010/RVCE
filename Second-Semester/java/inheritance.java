import java.util.*;
class Student
{
	String name;
	int roll;
	String usn;
	Scanner sc=new Scanner(System.in);
	void getdata()
	{
		System.out.println("enter usn: ");
		usn=sc.nextLine();
		System.out.println("enter name: ");
                name=sc.nextLine();
		System.out.println("enter roll: ");
                roll=sc.nextInt();
	}
	void display()
	{
		System.out.println("the name is: "+name);
		System.out.println("the usn is: "+usn);
		System.out.println("the roll is: "+roll);
	}
}
class Pgstudent extends Student
{
	String sem;
	double fees,year;
	void pggetdata()
	{
		//getdata();
		super.getdata();
		System.out.println("enter the semester: ");
		sem=sc.next();
		System.out.println("enter the fees: ");
		fees=sc.nextDouble();
		System.out.println("enter the year: ");
                year=sc.nextDouble();
	}
	void pgdisplay()
	{
		super.display();
		System.out.println("the semester is: "+sem);
		System.out.println("the fees is: "+fees);
		System.out.println("the year is: "+year);
	}
}
class Inheritance
{
	public static void main(String args[])
	{
		int n;
		while (true)
		{
			Scanner sc=new Scanner(System.in);
			System.out.println("1-->pg student\n2-->ug student\n3-->exit\n");
			int ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					System.out.println("enter the number of student details to be entered\n");
					n=sc.nextInt();
					Pgstudent p1=new Pgstudent();
					for(int i=0;i<n;i++)
					{
						//Pgstudent p1=new Pgstudent();
						p1.pggetdata();
					}
					for(int j=0;j<n;j++)
					{
						p1.pgdisplay();
					}
				case 3:
					System.exit(0);
			}
		}
	}
}

