#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<array>
#include<fstream>

using namespace std;
//string best_score;
/*void save_score(int guesses)
{
	ofstream input("savescore.txt");
	input>>guesses;
	ifstream output("savescore.txt");
	while(getline(output,best_score))
	{
		cout<<best_score;
	}
}*/
void play_game()
{
	int random=rand()%100;
	vector<int> guesses;
	//int size=sizeof(guesses)/sizeof(int);
	int count=0;
	int guess;
	cout<<random<<endl;
	//cout<<"you have 5 tries:\n";
	while(true)
	{
		cout<<"guess the number: ";
		cin>>guess;
		guesses.push_back(guess);
		if(random==guesses[count])
		{
			cout<<"you win!!\n";
			break;
		}
		else if(random>guesses[count])
		{
			cout<<"too low\n";
		}
		else
		{
			cout<<"too high\n";
		}
		//save_score(++count);
		count++;
	}
	if(random==guesses[count])
	{
		cout<<"you guessed the number in "<<count+1<<"  attempt\n";
	}
	else
	{
		cout<<"sorry better luck next time:\n";
	}
	for(int i=0;i<guesses.size();i++)
	{
		cout<<guesses[i]<<"\t";
	}
	cout<<"\n";
}
int main()
{
	srand(time(NULL));
	int choice;
	do
	{
		cout<<"---------------------------------------\n";
		cout<<"\tGUESSING GAME\n";
		cout<<"---------------------------------------\n";
		cout<< "0-->exit\n"<< "1-->to play game\n";
		cout<<"enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 0:
				cout<<"thanks!!\n";
				break;
			case 1:
				play_game();
				break;
		}
	}while(choice!=0);
	return 0;
}
