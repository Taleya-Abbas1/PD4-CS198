#include<iostream>
using namespace std;
void take(string reverse);
void Take(string reverse);
main()
{
    string reverse;
    cout<<"Enter true or false:";
    cin>>reverse;
    take(reverse);
    Take(reverse);
}
void take(string reverse)
{ 
    if(reverse == "true")
    { 
     cout<<"False";
    }
}
void Take(string reverse)
{
     if (reverse == "false")
    {
     cout<<"True";
    }
}
