import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

class Files
{
	public static void filedetails()
	{
		File dir=new File("./.");
		String [] children=dir.list();
		if(children==null)
		{
			System.out.println("file does not exists in the directory");
		}
		else
		{
			for(int i=0;i<children.length;i++)
			{
				String filename=children[i];
				System.out.print(filename+"\t");
			}
			System.out.println();
		}
	}
	public void writetofile()
	{
		System.out.println("select from the following file to write: ");
		filedetails();
		try
		{
			System.out.print("enter the file name to write: ");
			Scanner sc=new Scanner(System.in);
			String filename=sc.nextLine();
			FileWriter fwriter=new FileWriter(filename);
			System.out.println("--------Enter data-------");
			String str=sc.nextLine();
			fwriter.write(str);
			fwriter.close();
			System.out.println("Writing operation completed");
		}
		catch(IOException e)
		{
			System.out.println("Exception caught: "+ e);
		}
	}
	public void readfromfile()
	{
		System.out.print("choose from the file to read: ");
		filedetails();
		try
		{
			System.out.print("enter the file name to read: ");
			Scanner sc=new Scanner(System.in);
			String filename=sc.nextLine();
			FileReader freader=new FileReader(filename);
			int i=0;
			while((i=freader.read())!=-1)
			{
				System.out.print((char)i);
			}
			freader.close();
		}
		catch(IOException e)
		{
			System.out.println("Exception caught: "+e);
		}
	}
	public void appendtofile()
	{
		try
		{
			System.out.print("enter the filename to append : ");
			Scanner sc=new Scanner(System.in);
			String filename=sc.nextLine();
			FileWriter fwriter=new FileWriter(filename,true);
			System.out.println("---------Enter Data--------");
			String str=sc.nextLine();
			fwriter.write(str);
			fwriter.close();
			System.out.println("Append operation completed");
		}
		catch(IOException e)
		{
			System.out.println("Exception caught: "+e);
		}

	}
	public static void main(String args[]) throws IOException
	{
		int ch;
		Files f1=new Files();
		while (true)
		{
			System.out.println("\n1--write\n2-->read\n3-->append\n4-->exit");
			Scanner sc=new Scanner(System.in);
			System.out.print("enter your choice: ");
			ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					f1.writetofile();
					break;
				case 2:
					f1.readfromfile();
					break;
				case 3:
					f1.appendtofile();
					break;
				case 4:
					System.exit(0);
				default:
					System.out.println("Try again!! wrong input");
			}
		}
	}
}
