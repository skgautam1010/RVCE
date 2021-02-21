#include<iostream>

using namespace std;
class User
{
	static int user_count;
	int age;
	public:
		int get_user()
		{
			return user_count;
		}
		std::string first_name;
		std::string last_name;
		int get_age()
		{
			return age;
		}
		void set_age(int age)
		{
			if(age>18)
			{
				this->age=age;
			}
			else
			{
				cout<<"age cant be set \n";
			}
		}
		User()
		{
			//cout<<"constructor created\n";
			user_count++;
		}
		User(std::string first_name,std::string last_name)
		{
			user_count++;
			this->first_name=first_name;
			this->last_name=last_name;
			//this->age=age;
		}
		~User()
		{
			//cout<<"Destructor caalled\n";
			user_count--;
		}
};
int User::user_count=0;
int main()
{
	User u1,u2,u3;
	User u("sk","gautam");
	int age;
	cout<<"enter the age: ";
	cin>>age;
	u.set_age(age);
	//u.first_name="sonu";
	//u.last_name="gautam";
	cout<<u.get_user()<<endl;
	u.~User();
	cout<<u.get_user()<<endl;
	return 0;
}
