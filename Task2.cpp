#include <iostream>
using namespace std;
float pyramidVolume(float output);

 float l, w, h, output;
 string unit;

main()
{
 float result;
 cout<<"Enter the length of the pyramid (in meters): ";
 cin>> l;
 cout<<"Enter the width of the pyramid (in meters): ";
 cin>> w;
 cout<<"Enter the height of the pyramid (in meters): ";
 cin>> h;
 cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
 cin>> unit;
 result = pyramidVolume(output);
 cout<<"The volume of the pyramid is: "<< result <<" cubic "<<unit;
}
float pyramidVolume(float output)
{
 if (unit == "meters")
 {
  output = (l * w * h)/3;
  return output;
 }
 if(unit == "millimeters")
 {
 output = ((l*1000)*(w*1000)*(h*1000))/3;
 return output;
 }
 if(unit == "centimeters")
 {
  output = ((l*100)*(w*100)*(h*100))/3;
  return output;
 }
 if(unit == "kilometers")
 {
  output = ((l*0.001)*(w*0.001)*(h*0.001))/3;
  return output;
 }
 return 0;
}
 
