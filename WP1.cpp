#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);

main()
{ 
  int x = 15 ;
  int y = 15 ;
  cout<< "Test";
  
  gotoxy(15,15);
  cout<< "My name is Taleya Abbas";
}

void gotoxy(int x,int y)
{
   COORD coordinates;
   coordinates.X= x;
   coordinates.Y= y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
