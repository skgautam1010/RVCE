#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> &data)
{
	data.push_back(40);
	for(int i=0;i<data.size();i++)
	{
		cout<<data[i]<<"\t";
	}
	cout<<"\n";
}
int main()
{
	vector<int> items={3,4,12};
	items.push_back(300);
	cout << items[items.size()-1]<<endl;
	print_vector(items);
	print_vector(items);
	print_vector(items);
	items.pop_back();
	cout<<items.size()<<endl;
}
