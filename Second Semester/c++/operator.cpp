#include<iostream>

class Position
{
	std::string status="Gold";
	public:
		int x=10;
		int y=20;
		Position operator+(Position pos)
		{
			Position new_pos;
			new_pos.x=x+pos.x;
			new_pos.y=y+pos.y;
			return new_pos;
		}
		bool operator ==(Position pos)
		{
			if(x==pos.x && y==pos.y)
			{
				return true;
			}
			return false;
		}
		friend void output_status(Position pos); 
};

void output_status(Position pos)
{
	std::cout<<pos.status<<std::endl;
}

int main()
{
	Position pos1,pos2;
	Position pos3=pos1+pos2;
	std::cout<<pos3.x<<" "<<pos3.y<<std::endl;
	pos2.x=30;
	output_status(pos2);
	if(pos1==pos2)
	{
		std::cout<<"they r the same"<<std::endl;
	}
}
