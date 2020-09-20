#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>

using namespace std;
//if the element is found it returns the position of  that element otherwise returns -1
int linnearsearch(vector <int>arr,int key)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
    }
    return -1;

    
}

int main()
{
    int n,key;
    cout<<"Enter the size of the array\n";
    cin>>n;
    vector<int>arr(n);
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=rand()%100+1;//generates random numbers between 1 to 100
        arr[i]=temp;
    }
    cout<<"The elements present in the array are\n";
    for(int e :arr)
    {
        cout<<e<<"  ";
    }
    cout<<"\n";
    cout<<"Enter the element to be searched\n";
    cin>>key;
    int result=linnearsearch(arr,key);
    if(result==-1)
    {
        cout<<"Element is not found returned values is: "<<result<<endl;
    }
    else
    {
        cout<<"Element is found at Position: "<<result<<endl;
    }
    
    return 0;
}