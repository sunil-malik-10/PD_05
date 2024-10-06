#include <iostream>
#include <cmath>
using namespace std;
float pyramidVolume(float,float,float,string);
int main() 
{
    float length,width,height;
    string desired_units_output;
    
    cout<<"Enter the length of the pyramid: ";
    cin>>length;
    cout<<"Enter the width of the pyramid: ";
    cin>>width;
    cout<<"Enter the height of the pyramid: ";
    cin>>height;
    cout<<"Enter the desired output unit(millimeters, centimeters,meters,kilometers):  ";
    cin>>desired_units_output;
    
    float volume=pyramidVolume(length,width,height,desired_units_output);
    cout<<"The volume of the pyramid is: "<<volume<<" cubic"<< desired_units_output;
  
}
float pyramidVolume(float length,float width,float height,string desired_units_output)
{   
    float volume=(length*width*height)/3;
    if(desired_units_output=="centimeters")
    {
        volume=volume*1000000;
      return volume;
    }
     if(desired_units_output=="kilometers")
    {
        volume=volume/1000000000;
        return volume;
    }
      if(desired_units_output=="millimeters")
    {
        volume=volume*1000000000;
        return volume;
    }
         if(desired_units_output=="meters")
    {
        volume*=1;
        return volume;
    }
    
     
}