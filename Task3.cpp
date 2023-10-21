#include <iostream>
using namespace std;
float taxCalculator(char x, float price);

char x;
int VP, FP, price;

main()
{
 float output;
 cout<<"Enter the vehicle type code (M, E, S, V, T): ";
 cin>> x;
 cout<<"Enter the price of the vehicle: $";
 cin>> VP;
 output = taxCalculator(x, price);
 cout<<"The final price of a vehicle of type "<<x<<" after adding the tax is: $"<<output<<".";
}

float taxCalculator(char x, float price)
{
 if (x == 'M')
 {
  price = VP + ((VP*6)/100);
  return price;
 }
 if (x== 'E')
 {
  price = VP + ((VP*8)/100);
  return price;
 }
 if (x == 'S')
 {
  price = VP + ((VP*10)/100);
  return price;
 }

 if (x == 'V')
 {
  price = VP + ((VP*12)/100);
  return price;
 }

 if (x == 'T')
 {
  price = VP + ((VP*15)/100);
  return price;
 }
 return 0;
} 
 