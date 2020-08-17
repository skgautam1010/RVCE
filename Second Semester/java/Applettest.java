import java.applet.Applet;
import java.awt.Graphics;
/*<applet code="Applettest" width=400 height=300>
<param name="abc" value="sonu kumar gautam"/>
</applet>*/
public class Applettest extends Applet
{
	public void paint(Graphics g)
	{
		String s=this.getParameter("abc");
		if(s==null)
		{
			s="hello";
		}
		g.drawString(s,30,120);
	}
}
