#include<iostream>
using namespace std;

float total_payable(string day, string month, float total);


main()
{
    string day, month; float total;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>total;
    float result= total_payable(day, month, total);
    cout<<"Payable Amount after discount: "<<result;


}
float total_payable(string day, string month, float total)
{
    float total_payable=total;
    if(day=="Sunday" && (month=="October"||month=="March"||month=="August"))
    {
        total_payable=total-(total*0.1);
    }
    
    return total_payable;

}