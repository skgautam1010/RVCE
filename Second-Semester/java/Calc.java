import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*
<applet code="Calc" width=500 height=500>
</applet>
*/
public class Calc extends Applet implements ActionListener
{
 	Button B[]= new Button[25];
 	TextField tf;
 	String temp="",temp2;
 	int i,choice;
 	int number1,number2,answer;
	public void init()
 	{
   		tf=new TextField(60);
   		for(int i=0;i<=9;i++)
   		{
     			B[i]=new Button(String.valueOf(i));
   		}

 		B[10]=new Button("+");
 		B[11]=new Button("-");
 		B[12]=new Button("*");
 		B[13]=new Button("/");
 		B[14]=new Button("%");
 		B[15]=new Button("sqrt");
 		B[16]=new Button("M+");
 		B[17]=new Button("M-");
 		B[18]=new Button("MR");
 		B[19]=new Button("MS");
 		B[20]=new Button("C");
 		B[21]=new Button("CE");
		B[22]=new Button("=");
		add(tf);
		for(int i=0;i<=9;i++)
		{
   			B[i].addActionListener(this);
   			add(B[i]);
		}
		add(B[10]);
		add(B[11]);
		add(B[12]);
		add(B[13]);
		add(B[14]);
		add(B[15]);
		add(B[16]);
		add(B[17]);
		add(B[18]);
		add(B[19]);
		add(B[20]);
		add(B[21]);
		add(B[22]);
		B[10].addActionListener(this);
		B[11].addActionListener(this);
		B[12].addActionListener(this);
		B[13].addActionListener(this);
		B[14].addActionListener(this);
		B[15].addActionListener(this);
		B[16].addActionListener(this);
		B[17].addActionListener(this);
		B[18].addActionListener(this);
		B[19].addActionListener(this);
		B[20].addActionListener(this);
		B[21].addActionListener(this);
		B[22].addActionListener(this);
		tf.setBounds(180,60,240,50);
		B[0].setBounds(180,110,60,60);
		B[1].setBounds(240,110,60,60);
		B[2].setBounds(300,110,60,60);
		B[3].setBounds(360,110,60,60);
		B[4].setBounds(180,170,60,60);
		B[5].setBounds(240,170,60,60);
		B[6].setBounds(300,170,60,60);
		B[7].setBounds(360,170,60,60);
		B[8].setBounds(180,230,60,60);
		B[9].setBounds(240,230,60,60);
		B[10].setBounds(300,230,60,60);
		B[11].setBounds(360,230,60,60);
		B[12].setBounds(180,290,60,60);
		B[13].setBounds(240,290,60,60);
		B[14].setBounds(300,290,60,60);
		B[15].setBounds(360,290,60,60);
		B[16].setBounds(180,350,60,60);
		B[17].setBounds(240,350,60,60);
		B[18].setBounds(300,350,60,60);
		B[19].setBounds(360,350,60,60);
		B[20].setBounds(180,410,60,60);
		B[21].setBounds(240,410,60,60);
		B[22].setBounds(300,410,120,60);
		setLayout(null);
	}
	public void actionPerformed(ActionEvent ae)
 	{
   		String str=ae.getActionCommand();
   		if(str=="+")
   		{
     			number1=Integer.valueOf(tf.getText());
     			tf.setText("");
     			choice=1;
     			temp="";
   		}
		else if(str=="-")
  		{
    			number1=Integer.valueOf(tf.getText());
    			tf.setText("");
    			choice=2;
    			temp="";
  		}
  		else if(str=="*")
  		{
    			number1=Integer.valueOf(tf.getText());
    			tf.setText("");
    			choice=3;
    			temp="";
  		}
  		else if(str=="/")
  		{
   			number1=Integer.valueOf(tf.getText());
   			tf.setText("");
   			choice=4;
   			temp="";
  		}
		else if(str=="%")
		{
			number1=Integer.valueOf(tf.getText());
			tf.setText("");
			choice=5;
			temp="";
		}
  		else if(str=="sqrt")
  		{
   			number1=Integer.valueOf(tf.getText());
   			tf.setText(String.valueOf(Math.sqrt(number1)));
  		}
  		else if(str=="M+")
  		{
			number1=Integer.parseInt(temp2);
			tf.setText("");
			choice=1;
			temp="";
  		}
  		else if(str=="M-")
  		{
   			number1=Integer.valueOf(temp2);
			tf.setText("");
			choice=2;
			temp="";
		}
		else if(str=="CE")
 		{
  			temp2=null;
  			tf.setText("");
  			temp="";
 		}
 		else if(str=="C")
 		{
  			temp="";
  			number1=0;
  			number2=0;
  			choice=0;
  			tf.setText("");
 		}
 		else if(str=="MS")
 		{
   			temp2=tf.getText();
 		}
 		else if(str=="MR")
 		{
  			tf.setText(temp2);
 		}
		else if(str=="=")
 		{
  			switch(choice)
  			{
   				case 1:
              				answer=number1+number2;
              				tf.setText(String.valueOf(answer));
              				break;
   				case 2:
              				answer=number1-number2;
              				tf.setText(String.valueOf(answer));
              				break;
   				case 3:
              				answer=number1*number2;
              				tf.setText(String.valueOf(answer));
              				break;
   				case 4:
              				answer=number1/number2;
              				tf.setText(String.valueOf(answer));
              				break;
				case 5:
					answer=number1%number2;
					tf.setText(String.valueOf(answer));
   			}
 		}
 		else
  		{
    			temp=temp+str;
    			tf.setText(temp);
    			number2=Integer.valueOf(temp);
  		}
	}
	public void paint(Graphics g)
	{
		setBackground(Color.black);
		for(i=0;i<23;i++)
		{
			B[i].setBackground(Color.magenta);
		}
	}
}

