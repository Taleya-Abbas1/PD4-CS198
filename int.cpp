#include<iostream>
using namespace std;
void integers(int x , int y);
main()
{
    int x ;
    cout<<"Enter  the number 1:";
    cin>> x;
    int y;
    cout<<"Enter the number 2:";
    cin>>y ;
    integers( x , y);
}
void integers(int x , int y)
{
    if (x == y)
    { 
      cout<<"true";
    }
    else
    { 
      cout<<"False";
    }
}