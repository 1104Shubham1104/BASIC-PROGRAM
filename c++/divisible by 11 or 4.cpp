#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
        if(num%11==0)
        {
            cout<<"NUMBER IS DIVISIBLE BY 11";
        }
        else if(num%4==0)
        {
            cout<<"NUMBER IS DIVISBLE BY 4";
        }
        else
        {
            cout<<"NUMBER IS NOT A FACTOR OF 4 AND 11";
        }
    return 0;
}