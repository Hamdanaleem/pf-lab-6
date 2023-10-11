#include<iostream>
using namespace std;

bool areSameNumber(int number_1, int number_2, int number_3);

main()
{
    int number_1; int number_2; int number_3;
    cout<<"Enter the first number: ";
    cin>>number_1;
    cout<<"Enter the second number: ";
    cin>>number_2;
    cout<<"Enter the third number: ";
    cin>>number_3;
    cout<<areSameNumber(number_1, number_2, number_3);
    
}
bool areSameNumber( int number_1, int number_2, int number_3)
{
    bool result;
    if((number_1==number_2)&&(number_2==number_3))
    {
        result=true;
    }
    else
    {   
        result=false;
    }
    return result;
}