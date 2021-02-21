#include<iostream>
#include<string>
#include<vector>
using namespace std;

template <typename t>
void swap(t &m,t &n)
{
	t temp=m;
	m=n;
	n=temp;
}

template <typename T>
void swap(T a[],T b[],int size)
{
	for(int i=0;i<size;i++)
	{
		T temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}
int main()
{
	int a=40,b=32;
	string add1="bengaluru";
	string add2="bihar";
	//cout<<"enter the two numbers to be swapped\n";
	//cout<<"enter the first number: ";
	//cin>>m;
	//cout<<"enter the second number: ";
	//cin>>n;
	//swap(a,b);
	//cout <<"a:"<< a<< " " << "b:" << b << endl;
	swap(add1, add2);
	cout<<"address1: "<<add1<<" "<<"address2 : "<<add2<<endl;
	int six[]={6,6,6,6,6,6};
	int nine[]={9,9,9,9,9,9};
	int size=sizeof(six)/sizeof(six[0]);
	for(int i=0;i<6;i++)
	{
		cout<<six[i]<<" "<<nine[i]<<"\t";
	}
	cout<<"\n";
	swap(six,nine);
	for(int i=0;i<6;i++)
	{
		cout<<six[i]<<" "<<nine[i]<<"\t";
	}
	cout<<"\n";
	return 0;
}
