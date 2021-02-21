#ifndef multifile
#define multifile
#include<string>
struct Rectangle
{
        int length;
        int breadth;
};
void swap(int &m,int &n);
void swap(std::string &a,std::string &b);
int area(int &l,int &b);
int area(Rectangle r);

#endif


