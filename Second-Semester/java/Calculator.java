import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="Calculator" width=800 height=600></applet>*/
public class Calculator extends Applet implements ActionListener
{
	String s,s1,s2,s3,s4;
	int i,a,c,result;
	Button b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
	Button[] b=new Button[10];
	Button add,sub,mul,div,eq,clear;
	TextField t1;
	public void init()
	{
		GridLayout g=new GridLayout(5,5);
		setLayout(g);
		for(i=0;i<10;i++)
		{
			b[i]=new Button(""+i);
		}
		add=new Button("+");
		sub=new Button("-");
		mul=new Button("*");
		div=new Button("/");
		eq=new Button("=");
		clear=new Button("C");
		t1=new TextField("");
		add(t1);
		for(i=0;i<10;i++)
		{
			add(b[i]);
		}
		add(add);
		add(sub);
		add(mul);
		add(div);
		add(eq);
		add(clear);
		for(i=0;i<10;i++)
		{
			b[i].addActionListener(this);
		}
		add.addActionListener(this);
		sub.addActionListener(this);
		mul.addActionListener(this);
		div.addActionListener(this);
		eq.addActionListener(this);
		clear.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e)
	{
		s=e.getActionCommand();
		/*if(s.equals("0")||s.equals("1")||s.equals("2")||s.equals("3")||s.equals("4")||s.equals("5")||s.equals("6")||
			s.equals("7")||s.equals("8")||s.equals("9"))*/
		char ch=s.charAt(0);
		if(Character.isDigit(ch))
		{
			s1 =t1.getText()+s;
			t1.setText(""+s1);
		}
		if(s.equals("+"))
		{
			s2=t1.getText();
			t1.setText("");
			s3="+";
		}
		if(s.equals("-"))
		{
			s2=t1.getText();
			t1.setText("");
			s3="-";
		}
		if(s.equals("*"))
		{
			s2=t1.getText();
			t1.setText("");
			s3="*";
		}
		if(s.equals("/"))
		{
			s2=t1.getText();
			t1.setText("");
			s3="/";
		}
		if(s.equals("="))
		{
			s4=t1.getText();
			a=Integer.parseInt(s2);
			c=Integer.parseInt(s4);
			if(s3.equals("+"))
			{
				result=a+c;
			}
			if(s3.equals("-"))
			{
				result=a-c;
			}
			if(s3.equals("*"))
			{
				result=a*c;
			}
			if(s3.equals("/"))
			{
				result=a/c;
			}
			t1.setText(""+result);
		}
		if(s.equals("C"))
		{
			t1.setText("");
		}
	}
}

