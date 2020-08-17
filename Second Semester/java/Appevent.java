import java.io.*;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class Appevent extends Applet
{
	Button b1;
	Label l1,l2,l3;
	TextField t1,t2,t3;
	public void init()
	{
		l1=new Label("enter first number: ");
		l2=new Label("enter Second number: ");
		l3=new Label();
		t1=new TextField();
		t2=new TextField();
		b1=new Button("Add");
		setLayout(null);
		l1.setBounds(20,40,130,120);
		l2.setBounds(20,120,160,120);
		t1.setBounds(200,80,190,30);
		t2.setBounds(200,170,190,30);
		b1.setBounds(120,220,110,50);
		l3.setBounds(20,300,190,120);
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(b1);
		add(l3);
		b1.addActionListener(new Myhandler());
	}
	public class Myhandler implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			int a,b,s=0;
			a=Integer.parseInt(t1.getText());
			b=Integer.parseInt(t2.getText());
			s=a+b;
			l3.setText("the output is: "+s);
		}
	}
}
