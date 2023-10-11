#include<iostream>
using namespace std;
bool result(int number_1, int number_2);
main()
{
int number_1, number_2; 
cout<<"Enter the first number: ";
cin>>number_1;
cout<<"Enter the second number: ";
cin>>number_2;
cout<<result(number_1, number_2);

}
bool result(int number_1, int number_2)
{
    bool result_1;
    if(number_1>number_2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
