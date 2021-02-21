import java.util.*;
//import java.util.concurrent.TimeUnit;
class Sort
{
	public static void main(String args[])
	{
		int n,i,j;
		String temp;
		System.out.println("enter the size for array");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		String name[]=new String[n];
		System.out.println("enter the string in the araay");
		for(i=0;i<n;i++)
		{
			name[i]=sc.nextLine();
		}
		System.out.println("the name in array are:");
		for(i=0;i<n;i++)
		{
			System.out.println(name[i]);
		}
		Arrays.sort(name);
		/*for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(name[i].compareTo(name[j])>0)
				{
					temp=name[i];
					name[i]=name[j];
					name[j]=temp;
				}
			}
		}*/
		System.out.println("the sorted arrays names are:");
		for(i=1;i<name.length;i++)
		{
			System.out.println(name[i]);
		}
		System.out.print(name[n-1]);
		long t=System.currentTimeMillis();
		System.out.println(t);
	}
}

