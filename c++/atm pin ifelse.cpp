#include<iostream>
using namespace std;
int main()
{
    cout<<"WELCOME TO PUNJAB NATIONAL BANK : ";
    cout<<endl;
    int pin;
    cout<<"ENTER THE PIN : ";
    cin>>pin;
    if(pin==2004)
    {
        cout<<"YOUR BALANCE IS 111111";
    }
    else
    {
        cout<<"INVALID PIN";
    }
    return 0;
}