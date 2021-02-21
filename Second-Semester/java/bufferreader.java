import java.io.*;
class Add4
{
	public static void main(String args[])throws IOException
	{
		int a,b,result=0;
		InputStreamReader r=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(r);
		System.out.println("enteer first number: ");
		a=Integer.parseInt(br.readLine());
		System.out.println("enter second number: ");
		b=Integer.parseInt(br.readLine());
		result=a+b;
		System.out.println("result="+result);
	}
}
