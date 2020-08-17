class Count
{
	public static void main(String args[])
	{
		int i,count=0;
		for(i=0;i<args.length;i++)
		{
			System.out.println("args"+"["+i+"]"+"="+args[i]);
			count++;
		}
		System.out.println("count="+count);
	}
}

