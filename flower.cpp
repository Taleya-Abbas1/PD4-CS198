#include<iostream>
using namespace std;
void flowerShop(int redRose ,int whiteRose ,int Tulips);
main()
{
   int redRose , whiteRose , Tulips ;
   cout<<"Enter the number of Red rose:";
   cin>>redRose ;
   cout<<"Enter the number of White rose:";
   cin>>whiteRose;
   cout<<"Enter the number of tulips:";
   cin>>Tulips;
   flowerShop(redRose, whiteRose , Tulips);
}
void flowerShop(int redRose, int whiteRose, int Tulips)
{
  float price;
  float discount;
  price = (redRose*2) + (whiteRose*4.10) + (Tulips*2.50);
  cout<<price;
  float payableAmount;
  if (price >200 )
  {
   discount = price - (price*0.2);
   cout<<endl<<"Price after discount:"<<discount;
  }
  else
  { 
   cout<<"No discount applied";
  }
}