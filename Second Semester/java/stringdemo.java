import java.io.Console;
class DemoString
{
	int capacity;
	String mstr;
	StringBuffer s;
	void findcapacity(StringBuffer s)
	{
		capacity=s.capacity();
	}
	void reversestr(StringBuffer s)
	{
		StringBuffer str;
		str=s.reverse();
		mstr=str.toString().toUpperCase();
	}
	
