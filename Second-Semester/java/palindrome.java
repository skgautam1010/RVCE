import java.util.*;
class Pal
{
	public static void main(String args[])
	{
		String a,reverse="";
		int i;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the string:");
		a=sc.nextLine();
		for(i=a.length()-1;i>=0;i--)
		{
			reverse=reverse+a.charAt(i);
		}
		System.out.println("reverse of the string="+reverse);
		if(a.equals(reverse))
		{
			System.out.println("its a palindrome");
		}
		else
		{
			System.out.println("not a palindrome");
		}
	}
}
