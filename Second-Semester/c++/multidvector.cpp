#include<iostream>
#include<vector>

int main()
{
	std::vector<std::vector<int>> guesses={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<guesses.size();i++)
	{
		for(int j=0;j<guesses.size();j++)
		{
			std::cout<<guesses[i][j]<<"  ";
		}
		std::cout<<"\n";
	}
	return 0;
}
