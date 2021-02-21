#include<iostream>
#include<string>
#include<vector>
using namespace std;
namespace sonu
{
	int print_array(std::vector<int> arr)
	{
		for(int i=0;i<arr.size();i++)
		{
			cout<<arr[i]<<"\t";
		}
		cout<<"\n";
		return 0;
	}
}
int main()
{
	std::vector<int> guesses={23,43,12,56,76};
	//int size=sizeof(guesses)/sizeof(guesses[0]);
	//int size=sizeof(guesses)/sizeof(int);
	/*for(int i=0;i<size;i++)
	{
		cout<<guesses[i]<<"\t";
	}
	cout<<"\n";*/
	sonu::print_array(guesses);
	cout<<guesses[3]<<endl;
	guesses[3]=65;
	cout<<guesses[3]<<endl;
}
