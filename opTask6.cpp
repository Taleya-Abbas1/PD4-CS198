#include<iostream>
#include<windows.h>
using namespace std; 
void printH();
void printA();
void printS();
void printN();
void gotoxy(int x, int y);
main()
{
   int x;
   int y;
   system("cls");
   gotoxy(1,1);
   printH();
   gotoxy(1,2);
   printA();
   gotoxy(1,3);
   printS();
   gotoxy(1,4);
   printS();
   gotoxy(1,5);
   printA();
   gotoxy(1,6);
   printN();
}
void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
}
void printH()
{
   cout<<"H";
}
void printA()
{
   cout<<"A";
}

void printS()
{
   cout<<"S";
}

void printN()
{
   cout<<"N";
}