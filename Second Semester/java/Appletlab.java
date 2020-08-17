import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code="Appletlab" width=1200 height=900></applet>*/
public class Appletlab extends Applet implements ActionListener
{
	Button b1,b2,b3;
	TextField t1,t2;
	public void init()
	{
		t1=new TextField();
		t2=new TextField();
		b1=new Button("cut");
		b2=new Button("copy");
		b3=new Button("paste");
		setLayout(null);
		b1.setBounds(110,120,100,50);
		b2.setBounds(250,120,100,50);
		b3.setBounds(400,120,100,50);
		t1.setBounds(110,250,400,120);
		t2.setBounds(110,500,400,120);
		add(b1);
		add(b2);
		add(b3);
		add(t1);
		add(t2);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e)
	{
		String s1;
		s1=t1.getText();
		t2.setText(s1);
	}
}
