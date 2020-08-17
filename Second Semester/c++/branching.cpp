#include<iostream>
#include<string>
using namespace std;
using std::cout;
int main()
{
	int a=3,b=2,c=7;
	if(a>b && a>c)
	{
		cout<<"the largest vaue is: "<<a<<endl;
	}
	else if(b>c)
	{
		cout<<"the largest value is: "<<b<<endl;
	}
	else
	{
		cout<<"the largest value is: "<<c<<endl;
	}
	enum class Season{winter,rainy,summer,spring};
	 Season now=Season::rainy;
	switch(now)
	{
		case Season::winter:
			cout<<"winter\n";
			break;
		case Season::rainy:
			cout<<"rainy\n";
			break;
		case Season::summer:
			cout<<"summer\n";
			break;
		case Season::spring:
			cout<<"spring\n";
			break;
	}
}
