#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	char e;
	bool check=1;
	cout<<floor(sqrt(50))<<" "<<pow(10,120000000)<<" "<<fmod(10,4.6)<<" "<<ceil(fmin(100,34.3))<<endl;
	cout<<std::boolalpha<<check<<endl;
	 float f=5.34;
	enum {y=23};
	//y=20;
	long double h=23.232226;
	double ddd=22233444.1222;
	cout<<ddd<<" "<<h<<" "<<f<<endl;
	cout<<sizeof(f)<<sizeof(ddd)<<sizeof(h)<<endl;
	//cout<<"\a";
	cout<<"charsize=\t"<<sizeof(e)<<endl;
	short b;
	long long d;
	long c;
	unsigned int aa;
	unsigned long bb;
	cout<<"long="<<sizeof(d)<<endl;
	return 0;
}
