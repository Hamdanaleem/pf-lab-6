#include<iostream>
using namespace std;
bool parity_analysis(int number);


main()
{   int number;
    cout<<"Enter a 3-digit number: ";
    cin>>number;
    cout<< parity_analysis(number);

}
bool parity_analysis(int number)
{
    int number_1, number_2, number_3, sum;
    number_1=number%10;
    number_2=(number/10)%10;
    number_3=(number/100)%10;
    sum=number_1+number_2+number_3;
    if(number%2==0 && sum%2==0)
    {
        return true;
    }
    if(number%2!=0 && sum%2!=0)
    {
        return true;
    }
    if(number%2==0 && sum%2!=0)
    {
        return false;
    }
   else
    {
        return false;
    }

    
}