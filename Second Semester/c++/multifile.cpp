#include "multifile.h"
#include<string>
void swap(int &m,int &n)
{
        int temp=m;
        m=n;
        n=temp;
//      cout<<"a:"<<a<<"\t"<<"b:"<<b<<endl;
}
void swap(std::string &a,std::string &b)
{
        std::string temp=a;
        a=b;
        b=temp;
}
int area(int &l,int &b)
{
        return l*b;
}
int area(Rectangle r)
{
        return r.length*r.breadth;
}


