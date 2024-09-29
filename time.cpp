#include<iostream>
using namespace std;
void longestTime(int min , int hours);
main()
{
  int min;
  cout<<"Enter time in mintues :";
  cin>>min;
  int hours;
  cout<<"Enter time in hours :";
  cin>>hours;
  longestTime(min , hours);
}
void longestTime(int min , int hours)
{
  int hours_to_min;
  hours_to_min = hours * 60;
  if (hours_to_min > min)
  {
   cout<<hours;
  } 
  if (hours_to_min < min)
  {
   cout<<min;
  }
}