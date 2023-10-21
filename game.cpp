#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
void printPlayer();
void erasePlayer();
void movePlayerRight();
void movePLayerLeft();
char getCharAtxy(short int x, short int y); 

int e1X = 2, e1Y = 2;
int e2X = 64, e2Y = 2;
int e3X = 33, e3Y = 7;
int pX = 33, pY = 28;

main()
{
 system("cls");
 printMaze();
 printEnemy1();
 printEnemy2();
 printEnemy3();
 printPlayer();
 while(true)
 { 
  if(GetAsyncKeyState(VK_RIGHT))
  {
   movePlayerRight();
  }
  if (GetAsyncKeyState(VK_LEFT))
  {
   movePLayerLeft();
  }
  moveEnemy1();
  moveEnemy2();
  moveEnemy3();
  Sleep(100); 
 }
}

void movePlayerRight()
{
 if (getCharAtxy(pX + 15, pY) == ' ')
 {
 erasePlayer();
 pX = pX + 1;
 printPlayer();
 }
}

void movePLayerLeft()
{
 if (getCharAtxy(pX - 1, pY) == ' ')
 {
 erasePlayer();
 pX = pX - 1;
 printPlayer();
 }
}

void printMaze()
{
 cout<<"##############################################################################"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"#                                                                            #"<<endl;
 cout<<"##############################################################################"<<endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
void printEnemy1()
{
 gotoxy(e1X, e1Y);
 cout<<"(~~~) (~~~)"<<endl;
 gotoxy(e1X, e1Y+1);
 cout<<"|=| | | |=|"<<endl;
 gotoxy(e1X, e1Y+2);
 cout<<"|=| | | |=|"<<endl;
 gotoxy(e1X, e1Y+3);
 cout<<"   \\   /   "<<endl;
 gotoxy(e1X, e1Y+4);
 cout<<"    \\ /    "<<endl;
}
void eraseEnemy1()
{
 gotoxy(e1X, e1Y);
 cout<<"           "<<endl;
 gotoxy(e1X, e1Y+1);
 cout<<"           "<<endl;
 gotoxy(e1X, e1Y+2);
 cout<<"           "<<endl;
 gotoxy(e1X, e1Y+3);
 cout<<"           "<<endl;
 gotoxy(e1X, e1Y+4);
 cout<<"           "<<endl;
}
void moveEnemy1()
{
 eraseEnemy1();
 e1X = e1X + 1;
 if(e1X == 29)
 {
  e1X = 2;
 }
 printEnemy1();
}
void printPlayer()
{
 gotoxy(pX, pY);
 cout<<"      /\\      "<<endl;
 gotoxy(pX, pY+1);
 cout<<"   __/~~\\__   "<<endl;
 gotoxy(pX, pY+2);
 cout<<" /   |  |   \\"<<endl;
 gotoxy(pX, pY+3);
 cout<<"=====.  .===== "<<endl;
 gotoxy(pX, pY+4);
 cout<<"     ||||      "<<endl;
}
void erasePlayer()
{
 gotoxy(pX, pY);
 cout<<"               "<<endl;
 gotoxy(pX, pY+1);
 cout<<"               "<<endl;
 gotoxy(pX, pY+2);
 cout<<"               "<<endl;
 gotoxy(pX, pY+3);
 cout<<"               "<<endl;
 gotoxy(pX, pY+4);
 cout<<"               "<<endl;
}
char getCharAtxy(short int x, short int y) 
{   
 CHAR_INFO ci;   
 COORD xy = {0, 0};   
 SMALL_RECT rect = {x, y, x, y};   
 COORD coordBufSize;   
 coordBufSize.X = 1;   
 coordBufSize.Y = 1;   
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' '; 
}
void printEnemy2()
{
 gotoxy(e2X, e2Y);
 cout<<"(~~~) (~~~)"<<endl;
 gotoxy(e2X, e2Y+1);
 cout<<"|=| | | |=|"<<endl;
 gotoxy(e2X, e2Y+2);
 cout<<"|=| | | |=|"<<endl;
 gotoxy(e2X, e2Y+3);
 cout<<"   \\   /   "<<endl;
 gotoxy(e2X, e2Y+4);
 cout<<"    \\ /    "<<endl;
}
void eraseEnemy2()
{
 gotoxy(e2X, e2Y);
 cout<<"           "<<endl;
 gotoxy(e2X, e2Y+1);
 cout<<"           "<<endl;
 gotoxy(e2X, e2Y+2);
 cout<<"           "<<endl;
 gotoxy(e2X, e2Y+3);
 cout<<"           "<<endl;
 gotoxy(e2X, e2Y+4);
 cout<<"           "<<endl;
}
void moveEnemy2()
{
 eraseEnemy2();
 e2Y = e2Y + 1;
 if(e2Y == 28)
 {
  e2Y = 2;
 }
 printEnemy2();
}
void printEnemy3()
{
 gotoxy(e3X, e3Y);
 cout<<"(~~~) (~~~)"<<endl;
 gotoxy(e3X, e3Y+1);
 cout<<"|=| | | |=|"<<endl;
 gotoxy(e3X, e3Y+2);
 cout<<"|=| | | |=|"<<endl;
 gotoxy(e3X, e3Y+3);
 cout<<"   \\   /   "<<endl;
 gotoxy(e3X, e3Y+4);
 cout<<"    \\ /    "<<endl;
}
void eraseEnemy3()
{
 gotoxy(e3X, e3Y);
 cout<<"           "<<endl;
 gotoxy(e3X, e3Y+1);
 cout<<"           "<<endl;
 gotoxy(e3X, e3Y+2);
 cout<<"           "<<endl;
 gotoxy(e3X, e3Y+3);
 cout<<"           "<<endl;
 gotoxy(e3X, e3Y+4);
 cout<<"           "<<endl;
}
void moveEnemy3()
{
 eraseEnemy3();
 e3X = e3X + 1;
 e3Y = e3Y + 1;
 if(e3X == 67)
 {
  e3X = 2;
  e3Y = 7;
 }
 if (e3Y == 28)
 {
  e3Y = 7;
 }
 printEnemy3();
}
















 