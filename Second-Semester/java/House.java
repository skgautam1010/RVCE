/*<applet code="House.class" width="300" height="400">
</applet>
*/
import java.io.*;
import java.awt.*;
import java.applet.*;

public class House extends Applet
{
	public void init()
	{
		setBackground(Color.cyan);
	}
	public void paint(Graphics g)
	{

		int x[]={150,300,225};
		int y[]={150,150,25};
		g.setColor(Color.red);
		g.drawRect(150,150,150,200);

		g.setColor(Color.red);
		g.drawRect(200,200,50,150);

		g.setColor(Color.red);
		g.drawOval(200,75,50,50);

		g.setColor(Color.red);
		g.drawPolygon(x,y,3);
//		g.setColor(Color.red);

	}
}
