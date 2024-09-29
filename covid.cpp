#include<iostream>
using namespace std;
void take(int people , int tp);
main()
{
   int people;
   cout<<"Enter number of peoples";
   cin>>people;
   int tp;
   cout<<"Enter tissue papers";
   cin>>tp;
   take(people , tp);

}
void take(int people , int tp)
{
   int days ;
   days = (500*tp)/(people*57);
   if( days<14 )
   { 
     cout<<" your tissue will last only "<<days<<" days  , buy more!";
   }
   if( days>14 )
   {
     cout<<" your tissue will last only "<<days<<" days  , no need to panic! ";
   }

}