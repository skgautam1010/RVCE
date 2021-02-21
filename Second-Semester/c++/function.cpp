#include<iostream>
#include<cmath>
using namespace std;
double power(double base, double exponent)
{
	int result=1;
	for(int i=0;i<exponent;i++)
	{
		result=result*base;
	}
	return result;
}
void getdata()
{
	int x;
	cout<<"Enter the value: ";
	cin>>x;
	cout<<"the value is: "<<x<<endl;
	cout<<"the square of value given  is: "<<pow(x,2)<<endl;
}
int main()
{
	double base,exponent;
	cout<<"enter base: ";
	cin>>base;
	cout<<"enter exponent";
	cin>>exponent;
	getdata();
	double result=power(base,exponent);
	cout<<"the value is: "<<result<<endl;
}

