#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int ch;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER: ";
    cin>>b;
    cout<<"ENTER THE CHOICE :";
    cin>>ch;
    switch (ch)
    {
        case 1: c=a+b;
        cout<<c;
        break;

        case 2: c=a-b;
        cout<<c;
        break;

        case 3: c=a*b;
        cout<<c;
        break;

        case 4: c=a/b;
        cout<<c;
        break;
    
        default:
        cout<<"INVALID";
        }

    return 0;

}