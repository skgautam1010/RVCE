#include<iostream>
#include<vector>
#include<array>
using namespace std;
void print_array(array<int,30>items)
{
	for(int i=0;i<items.size();i++)
	{
		if(items[i]==0)
		{
			break;
		}
		else
		{
			cout<<items[i]<<"\t";
		}
	}
	cout<<"\n";
}
int main()
{
	std::array<int,30>items={3,14,23};
//	cout<<items[2];
	print_array(items);
}
