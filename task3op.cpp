#include<iostream>
using namespace std;

float perimeter(float value, char shape);
main()
{
 float value, result; char shape;
 cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
 cin>>shape;
 cout<<"Enter the value: ";
 cin>>value;
 result=perimeter(value,shape);
 cout<<"The perimeter is: "<<result;
}
float perimeter(float value, char shape)
{
    float perimeter;
    if(shape=='s')
    {
        perimeter=4*value;
    }
    if(shape=='c')
    {
        perimeter=6.28*value;
    }
    if(shape=='t')
    {
        perimeter=3*value;
    }
    if(shape=='h')
    {
        perimeter=6*value;
    }
    return perimeter;
}