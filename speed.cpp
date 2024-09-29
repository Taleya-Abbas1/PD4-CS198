#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
   int speed;
   cout<<"Enter the speed:";
   cin>>speed;
   checkSpeed(speed);
}
void checkSpeed(int speed)
{
   if(speed > 100)
   {
   cout<<"Halt.. YOU WILL BE CHALLANGED!!!";
   }
   if(speed <=100)
   {
   cout<<"Perfect!You're going good";
   }

}