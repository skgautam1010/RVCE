#include<iostream>
#include<array>
#include<vector>
#include<string>
#include "multifile.h"
using namespace std;

int main()
{
	Rectangle r;
	r.length=5;
	r.breadth=10;
	int ar=area(r.length,r.breadth);
	cout<<"area:"<<" "<<ar<<endl;
	cout<<"area:"<<" "<<area(r)<<endl;
	int a=8,b=23;
	string first_name="sonu";
	string last_name="gautam";
	swap(a,b);
	cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
	swap(first_name,last_name);
	cout<<first_name<<" "<<last_name<<endl;
	return 0;
}
