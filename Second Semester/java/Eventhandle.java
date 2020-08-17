import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="Eventhandle" width=600 height=400></applet>*/
public class Eventhandle extends Applet implements KeyListener
{
	String msg="";
	int x=50,y=200;
	public void init()
	{
		addKeyListener(this);
	}
	public void keyPressed(KeyEvent ke)
	{
		showStatus("key Down");
		int key=ke.getKeyCode();
		switch(key)
		{
			case KeyEvent.VK_F1:
					msg += "<F1>";
					break;
			case KeyEvent.VK_F2:
					msg += "<F2>";
					break;
			case KeyEvent.VK_PAGE_UP:
					msg += "<pgup>";
					break;
			case KeyEvent.VK_PAGE_DOWN:
					msg += "<pgdn>";
					break;
			case KeyEvent.VK_LEFT:
					msg += "<Left Arrow>";
					break;
			case KeyEvent.VK_RIGHT:
					msg += "<Right Arrow>";
					break;
			case KeyEvent.VK_CUT:
					msg += "<ctrl+x>";
					break;
			case KeyEvent.VK_COPY:
					msg += "<ctrl+c>";
					break;
			case KeyEvent.VK_PASTE:
					msg += "<ctrlv>";
					break;
			case KeyEvent.VK_CONTROL:
					msg +="<ctrl>";
					break;
			case KeyEvent.VK_PLUS:
					msg +="<plus>";
					break;
			case KeyEvent.VK_BACK_SPACE:
					msg +="<backspace>";
					break;
			case KeyEvent.VK_SHIFT:
					msg +="<shift>";
					break;
			case KeyEvent.VK_ENTER:
					msg +="<enter>";
					break;
			case KeyEvent.VK_DELETE:
					msg +="<delete>";
					break;
		}
		repaint();
	}
	public void keyReleased(KeyEvent ke)
	{
		showStatus("key up");
	}
	public void keyTyped(KeyEvent ke)
	{
		showStatus("key typed");
		msg += ke.getKeyChar();
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,x,y);
	}
}
