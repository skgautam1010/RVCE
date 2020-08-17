#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	string filename;
	cin>>filename;
	std::ifstream f;
	f.open("test");
	std::ofstream files (filename,ios::app);
	if(files.is_open())
	{
		cout<<"succesfull\n";
	}
	int n;
	cout<<"enter the number of names you want:";
	cin>>n;
	string name;
	std::vector<string>names;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the"<<i+1<<"name: ";
		getline(cin,name);
		names.push_back(name);
	}
	for(string n :names)
	{
		files<<n<<endl;
	}
	cout<<"\n";
	vector<string>naming;
	string output;
	while(getline(f,output))
	{
		naming.push_back(output);
	}
	for(string n:naming)
	{
		cout<<n<<endl;
	}
	files.close();
}
