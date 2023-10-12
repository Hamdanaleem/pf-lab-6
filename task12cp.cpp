#include<iostream>
using namespace std;

float totalIncome(string type, int rows, int columns);

main(){
    string type; int rows, columns;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>type;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    float result=totalIncome(type, rows, columns);
    cout<<result;
}
float totalIncome(string type, int rows, int columns)
{
    float result;
    if(type=="Premiere")
    {
        result=rows*columns*12.00;
    
    }
    if(type=="Normal")
    {
        result=rows*columns*7.50;
    
    }
    if(type=="Discount")
    {
        result=rows*columns*5.00;
    
    }
    return result;
}