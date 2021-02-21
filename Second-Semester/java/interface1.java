class Student
{
	int rollnumber;
	void getnumber(int n)
	{
		rollnumber=n;
	}
	void putnumber()
	{
		System.out.println("roll no: "+rollnumber);
	}
}
class Test extends Student
{
	float part1,part2;
	void getmarks(float m1,float m2)
	{
		part1=m1;
		part2=m2;
	}
	void putmarks()
	{
		System.out.println("marks obtained");
		System.out.println("part1="+part1);
		System.out.println("part2="+part2);
	}
}
interface Sports
{
	float sportwt=6.0F;
	void putwt();
}
class Result extends Test implements Sports
{
	float total;
	public void putwt()
	{
		System.out.println("sports wt="+sportwt);
	}
	void display()
	{
		total=part1+part2+sportwt;
		putnumber();
		putmarks();
		putwt();
		System.out.println("total="+total);
	}
}
class Hybrid1
{
	public static void main(String args[])
	{
		Result r1=new Result();
		r1.getnumber(1234);
		r1.getmarks(27.5F,33.0F);
		r1.display();
	}
}

