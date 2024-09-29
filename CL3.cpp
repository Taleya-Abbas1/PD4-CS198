#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void playerMove(int x, int y);
main()
{
   int x = 4, y = 4;
   system("cls");
   printMaze();
   playerMove(x,y);
   
}

void playerMove(int x , int y)
{
   gotoxy(x, y);
   cout << " P ";
   gotoxy(x, y);
   cout << "  ";
   gotoxy(0,10);
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