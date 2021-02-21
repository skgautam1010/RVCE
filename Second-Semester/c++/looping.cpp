#include<string>
#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main()
{
	int i;
	cout<<"enter the number : ";
	cin>>i;
	string guessing;
	string answer="6";
	cout<<"enter the guessing number: ";
	cin>>guessing;
	string check=guessing==answer?"true":"false";
	cout<<check<<endl;
	array<int,5> data={1,2,3,4,5};
	//range based loop
	for(int n:data)
	{
		cout<<n<<"\t";
	}
	int f=1;
	while(i>0)
	{
		f=f*i;
		i--;
	}
	cout<<"the factorial is: "<<f<<endl;
	string password="12345";
	string guess;
	do
	{
		cout<<"guess the password: ";
		cin>>guess;
		if(password==guess)
		{
			cout<<"correct guess\n";
		}
	}while(guess!=password);
	string sentence="this is my c++ coding class";
	for(int i=0;i<sentence.length();i++)
	{
		cout<<sentence[i]<<endl;
		if(sentence[i]==' ')
		{
			cout<<"found space\n";
			break;
		}
		//continue;
	}
}
