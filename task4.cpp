#include <iostream>
using namespace std;
float projectTimeCalculation(float neededHours, float days, float workers);
main()
{
 float neededHours, days, workers, output;
 cout<<"Enter the needed hours: ";
 cin>> neededHours;
 cout<<"Enter the days that the firm has: ";
 cin>> days;
 cout<<"Enter the number of all workers: ";
 cin>> workers;
 output = projectTimeCalculation(neededHours, days, workers);
 if (output >= neededHours)
 {
  float x = output - neededHours;
  cout<<"Yes!"<<x<<" hours left.";
 }
 if (output < neededHours)
 {
  float x = neededHours - output;
  cout<<"Not enough time! "<<x<<" hours needed.";
 }
}

float projectTimeCalculation(float neededHours, float days, float workers)
{  
 int totalTime;
 float totalDays, workerTime, tenPer;
 tenPer = (10*days)/100;
 totalDays = days - tenPer;
 workerTime = workers*10;
 totalTime = totalDays*workerTime;
 return totalTime;
}