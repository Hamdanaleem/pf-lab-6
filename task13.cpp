#include<iostream>
using namespace std;

float lowestPrice(int kilometers, string time);

main(){
    int kilometers; string time;
    cout<<"Enter the number of kilometers: ";
    cin>>kilometers;
    cout<<"Enter the period of the day (day/night): ";
    cin>>time;
    float result=lowestPrice(kilometers, time);
    cout<<"Lowest price for "<<kilometers<<" kilometers: "<<result<<" EUR";
}
float lowestPrice(int kilometers, string time)
{
    float Result;
    
   
       if(time=="day" && kilometers<20)
    {
        Result=(kilometers*0.79)+0.70;
    }
    else if(time=="night" && kilometers<20)
    {
       Result=(kilometers*0.90)+0.70;
   
    }
    else if(kilometers>=20)
    {
         Result=(kilometers*0.09);

    }
    
    else if (kilometers>=100)
    {
       Result=(kilometers*0.06);

    }
    return Result;
    
}