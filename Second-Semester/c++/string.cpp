#include<iostream>
//#include<string>
using namespace std;
int main()
{
	std::string greeting="hello";
	std::string start="hey";
	//getline(std::cin,start);
	//cout<<start<<endl;
	int number=15;
	cout<<std::oct<<number<<endl;
	greeting.append(" this is sonu");
	greeting.insert(18," age=22");
	//greeting.erase(18,1);
	greeting.replace(greeting.find("t"),4,"****");
	if(greeting.find_first_of("w")==-1) cout<<"not found"<<endl;
	if(start =="hey") cout<<"equals"<<endl;
	cout<<greeting<<" "<<" "<<greeting.length()<<" "<<greeting.substr(2,6)<<endl;
	return 0;
}
