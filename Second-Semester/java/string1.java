import java.util.*;
class String1
{
	public static void main(String args[])
	{
		while(true)
		{
			System.out.println("1-->string methods");
			System.out.println("2-->string buffer methods");
			System.out.println("0-->exit");
			Scanner sc=new Scanner(System.in);
			System.out.println("enter your String: ");
			String s1=sc.nextLine();
			System.out.println("enter the choice: ");
                        int ch=sc.nextInt();

			switch(ch)
			{
				case 1:
					while (true)
					{
						System.out.println("0-->exit\n1-->length");
						System.out.println("2-->uppercase");
						System.out.println("3-->lowercase");
						System.out.println("4-->character at");
						System.out.println("5-->index of");
						System.out.println("6-->concat");
						System.out.println("7-->last index of");
						System.out.println("8-->compare to");
						System.out.println("9-->equals");
						System.out.println("10-->trim\nEnter your choice:");
						int c=sc.nextInt();
						switch(c)
						{
							case 1:
								System.out.println("length="+s1.length());
								break;
							case 2:
								System.out.println("uppercase="+s1.toUpperCase());
								break;
							case 3:
								System.out.println("lowercase="+s1.toLowerCase());
								break;
							case 4:
								System.out.println("enter the integer number");
								int i=sc.nextInt();
								System.out.println("character at="+s1.charAt(i));
								break;
							case 5:
								System.out.println("enter the character number");
                                                                String c1=sc.next();
                                                                System.out.println("index oof="+s1.indexOf(c1));
                                                                break;
							case 6:
								String s2="mca department";
								System.out.println("concatenation="+s1+" "+s2);
								break;
							case 7:
								System.out.println("enter the character number");
                                                                String c2=sc.next();
                                                                System.out.println("last index oof="+s1.lastIndexOf(c2));
                                                                break;
							case 8:
								System.out.println("enter the string ");
								Scanner s=new Scanner(System.in);
                                                                String c5=s.nextLine();
                                                                System.out.println("compare to="+s1.compareTo(c5));
                                                                break;
							case 9:
								System.out.println("enter the string ");
                                                                Scanner sc1=new Scanner(System.in);
                                                                String c3=sc1.nextLine();
                                                                System.out.println("equals="+s1.equals(c3));
                                                                break;
							case 10:
                                                                System.out.println("compare to="+s1.trim());
                                                                break;
							case 0:
								System.exit(0);
						}
					}
				case 2:
						StringBuffer str=new StringBuffer("this is Rvce");
						System.out.println("1-->length"+" "+str.length());
						System.out.println("2-->>append"+" "+str.append(s1));
						System.out.println("3-->insert"+" "+str.insert(3,'w'));
						System.out.println("4-->replace"+" "+str.replace(0,3,"itts"));
						System.out.println("5-->delete"+" "+str.delete(4,7));
						System.out.println("6-->reverse"+" "+str.reverse());
						System.out.println("7-->capacity"+ " "+str.capacity());
						System.out.println("8-->character at"+" "+str.charAt(3));
						System.out.println("9-->substring"+" "+str.substring(2));
						System.out.println("10-->substring"+" "+str.substring(2,9));
						break;
				case 0:
					System.exit(0);
			}
		}
	}
}

