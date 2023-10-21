#include <iostream>
#include <windows.h>
using namespace std;
void printName();
int options(int x);
void option1();
void option2();
void option3();
main()
{
 int option, x;
 system("cls");
 while(1)
 {
 printName();
 option = options(x);
 if (option == 1)
 {
  option1();
 }
 if (option == 2)
 {
  option2();
 }
 if (option == 3)
 {
  option3();
 }
 }
}
void printName()
{
 system("cls");
 cout<<"***************************************************************************************"<<endl;
 cout<<"*     ##### ### #   #  ###  #   #  ###  #####       #####  ###   ###  #   #   ###     *"<<endl;
 cout<<"*     #      #  ##  # #   # ##  # #   # #           #     #   # #   # #   #  #        *"<<endl;
 cout<<"*     ###    #  # # # ##### # # # #     ###         ###   #   # #     #   #   ##      *"<<endl;
 cout<<"*     #      #  #  ## #   # #  ## #   # #           #     #   # #   # #   #     #     *"<<endl;
 cout<<"*     #     ### #   # #   # #   #  ###  #####       #      ###   ###   ###   ###      *"<<endl;
 cout<<"***************************************************************************************"<<endl;
 cout<<"                                       Menu System                                     "<<endl;
 cout<<" "<<endl;
 cout<<"Select one of the following options..."<<endl;
 cout<<"    "<<endl;
}
int options(int x)
{
 cout<<"1. Add Expense"<<endl;
 cout<<"2. Add Income"<<endl;
 cout<<"3. Create Budget"<<endl;
 cout<<"Option... ";
 cin>> x;
 return x;
}

void option1()
{
 int amount;
 string expenseName, category, notes, date;
 system("cls");
 cout<<"*******************************"<<endl;
 cout<<"*         ADD EXPENSE         *"<<endl;
 cout<<"*******************************"<<endl;
 cout<<"    "<<endl;
 cout<<"Enter Expense Name: ";
 cin>> expenseName;
 cout<<"Enter the Amount: ";
 cin>> amount;
 cout<<"Enter the Date: ";
 cin>> date;
 cout<<"Enter the Category: ";
 cin>> category;
 cout<<"Notes: ";
 cin>> notes;
 cout<<"    "<<endl;
 cout<<"Your information is saved."<<endl;
 Sleep(800);
}

void option2()
{
 string incomeSource, category, notes, date;
 int amount;
 system("cls");
 cout<<"*******************************"<<endl;
 cout<<"*         ADD INCOME          *"<<endl;
 cout<<"*******************************"<<endl;
 cout<<"  "<<endl;
 cout<<"Enter the Income Source: ";
 cin>> incomeSource;
 cout<<"Enter the Amount: ";
 cin>> amount;
 cout<<"Enter the Date: ";
 cin>> date;
 cout<<"Enter the Category: ";
 cin>> category;
 cout<<"Notes: ";
 cin>> notes;
 cout<<"    "<<endl;
 cout<<"Your information is saved."<<endl;
 Sleep(800);
}
 
void option3()
{
 string category, sDate, eDate;
 int amount; 
 system("cls");
 cout<<"*******************************"<<endl;
 cout<<"*        CREATE BUDGET        *"<<endl;
 cout<<"*******************************"<<endl;
 cout<<"  "<<endl;
 cout<<"Budget Category: ";
 cin>> category;
 cout<<"Budget Amount: ";
 cin>> amount;
 cout<<"Start Date: ";
 cin>> sDate;
 cout<<"End Date: ";
 cin>> eDate;
 cout<<"    "<<endl;
 cout<<"Your information is saved."<<endl;
 Sleep(800);
}

























