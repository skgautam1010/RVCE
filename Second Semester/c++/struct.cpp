#include<iostream>
using namespace std;


struct User
{
	std::string first_name;
	std::string last_name;
	int get_age()
	{
		return age;
	}
	private:
		int age=23;
};
int main()
{
	User handle;
	cout<<"enter the first name of the user: ";
	cin>>handle.first_name;
	cout<<"enter the last name of the user: ";
	cin>>handle.last_name;
	//cout<<"enter the age: ";
	//cin>>handle.age;
	cout<<"first name: "<<handle.first_name<<"\n"<<"last name: "<<handle.last_name<<"\n"<<"age: "<<handle.get_age()<<endl;
	return 0;
}
