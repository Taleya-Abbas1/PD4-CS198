#include<iostream>
using namespace std;
void value(string country , float price);
main()
{
    string country;
    cout<<"Enter the country name:";
    cin>>country;
    float price;
    cout<<"Enter ticket price in dollars:"<<"$";
    cin>>price;
    value(country , price);
}
void value(string country , float price)
{  
    float final;
    float discount;
    if(country == "Pakistan")
    { 
     discount =price* 5/100;
     final = price - discount;
     }
    if(country == "Ireland")
    {
    discount = price*10/100;
    final = price - discount;
    }
    if(country == "India")
    {
    discount = price*20/100;
    final = price - discount;
    }
    if(country == "England")
    {
    discount = price*30/100;
    final = price - discount;
    }
    if(country == "Canada")
    {
    discount = price*45/100;
    final = price - discount;
    }
    cout<<"Enter the final price:"<<final;
}