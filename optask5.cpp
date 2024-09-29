#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
  int x;
  x = 80;
  int y;
  y = 20;
  system("cls");
  gotoxy(x,y) ;
  cout<<"TALEYA";
}
void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
}