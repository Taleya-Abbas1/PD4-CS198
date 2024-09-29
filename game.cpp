#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
    int holidays;
    cout<<"Enter the holidays:";
    cin>>holidays;
    pet(holidays); 
}
void pet(int holidays)
{
  int workingDays;
  workingDays = 365 - holidays;
  int timeForGame;
  int difference;
  timeForGame = (63*workingDays) + (127*holidays);
  int hours;
  int min; 
  if (timeForGame <30000)
  {
    cout<<"Tom sleep well "<<endl;
    difference = 30000 - timeForGame;
    hours = difference/60;
    min = difference%60; 
    cout<<  hours<<"  hours and  " <<min << " mintues for play";
    }
    if(timeForGame > 30000)
   {
    cout<<"Tom will run away "<<endl;
    difference =  timeForGame -30000;
    hours = difference/60;
    min = difference%60; 
    cout<<  hours<<"  hours and  " <<min << " mintues for play";
 }
}





