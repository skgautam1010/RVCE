import java.awt.*;
import java.applet.*;
public class Applet1 extends Applet
{
	public void init()
	{
		System.out.println("init method called");
	}
	public void start()
	{
		System.out.println("start method called");
	}
	public void paint(Graphics g)
	{
		g.drawOval(160,400,759,250);
	}
	public void stop()
	{
		System.out.println("stop method called");
	}
	public void destroy()
	{
		System.out.println("destroy method called");
	}
}
