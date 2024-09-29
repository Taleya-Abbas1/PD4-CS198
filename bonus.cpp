#include<iostream>
using namespace std;
void position(int a , int b);
main()
{
  int a;
  cout<<"Enter the position a:";
  cin>>a;
  int b;
  cout<<"Enter the position b:";
  cin>>b;
  position(a,b);
}
void position(int a, int b)
{ 
  int c;
  c= b-a;
  if (c < 6)
  {
   cout<<"true";
  }
  else
  {
   cout<<"false";
  }
}