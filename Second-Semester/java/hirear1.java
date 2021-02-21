//Hirearchial Inheritance
import java.util.*;
class Student
{
	String usn;
	String name;
	int age;
	Scanner sc =new Scanner(System.in);
	void getdata()
	{
		System.out.println("enter usn: ");
		Scanner s1=new Scanner(System.in);
		usn=s1.nextLine();
		System.out.println("enter name: ");
		Scanner s2=new Scanner(System.in);
		name=s2.nextLine();
		System.out.println("enter the age: ");
		age=sc.nextInt();
	}
	void display()
	{
		System.out.println("usn is: "+usn);
		System.out.println("name is: "+name);
		System.out.println("age is: "+age);
	}
}
class Pgstudent extends Student
{
	int fees;
	int semester;
	Scanner sc=new Scanner(System.in);
	void pggetdata()
	{
		getdata();
		System.out.println("enter the fess: ");
		fees=sc.nextInt();
		System.out.println("enter the semester: ");
		semester=sc.nextInt();
	}
	void pgdisplay()
	{
		display();
		System.out.println("fess is: "+fees);
		System.out.println("semester is: "+semester);
	}
}
class Ugstudent extends Student
{
	int fees;
	int semester;
	Scanner sc=new Scanner(System.in);
	void uggetdata()
	{
		super.getdata();
		System.out.println("enter fees: ");
		fees=sc.nextInt();
		System.out.println("enter the semester: ");
		semester=sc.nextInt();
	}
	void ugdisplay()
	{
		super.display();
		System.out.println("fees is: "+fees);
		System.out.println("semester is: "+semester);
	}
}
class Hirearinheritance
{
	public static void main(String args[])
	{
		while (true)
		{
			System.out.println("1-->pg student detail\n2-->ug student detail\n3-->exit");
			System.out.println("enter your choice: ");
			Scanner sc=new Scanner(System.in);
			int ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					System.out.println("enter the number of student details to be entered: ");
					int n=sc.nextInt();
					for(int i=0;i<n;i++)
					{
						Pgstudent p1=new Pgstudent();
						p1.pggetdata();
						p1.pgdisplay();
					}
					break;
				case 2:
					System.out.println("enter the number of ug student detail to be entered: ");
					int m=sc.nextInt();
					for(int j=0;j<m;j++)
					{
						Ugstudent u1=new Ugstudent();
						u1.uggetdata();
						u1.ugdisplay();
					}
					break;
				case 3:
					System.exit(0);
				default:
					System.out.println("wrong user input");
			}
		}
	}
}

