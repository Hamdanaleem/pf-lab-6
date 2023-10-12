#include <iostream>
using namespace std;

string calculate_speed(float speed);



main(){

float speed;
cout<<"Enter the speed: ";
cin>>speed;
 string result=calculate_speed(speed);
cout<<result;

}
string calculate_speed(float speed)
{
    string result;
    if(speed<=10)
    {
        result="slow";
    }
    if(speed<=50 && speed >=11)
    {
        result="average";
    }
    if(speed<=150 && speed >=51)
    {
        result="fast";
    }
    if(speed<=1000 && speed >=151) 
    {
        result="ultra-fast";
    }
    if(speed>1000)
    {
        result="extremely fast";
    }
    return result;

}