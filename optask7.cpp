#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void playerMove(int x, int y);
main()
{
   int x = 3, y = 2;
   system("cls");
   printMaze();
   while (true)
   {
      playerMove(x,y);
      y =  y+ 1;
      if (y == 8)
      {
         y = 2;
      }
   }
    gotoxy(0, 10);
}
  
void playerMove(int x,int y)
{
   gotoxy(x, y);
   cout << "Patrol";
   Sleep(500);
   gotoxy(x,y);
   cout<<"       ";
   
}
void printMaze()
{
   cout <<"#######################" <<endl;
   cout <<"#                     #"<<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#######################" <<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}