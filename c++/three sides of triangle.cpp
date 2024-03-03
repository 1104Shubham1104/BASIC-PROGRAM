#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THE FIRST SIDE : ";
    cin>>a;
    cout<<"ENTER THE SECOND SIDE : ";
    cin>>b;
    cout<<"ENTER THE THIRD SIDE : ";
    cin>>c;
        if((a+b)>c && (b+c)>a && (c+a)>b)
        {
            cout<<"IT IS A TRIANGLE";
        }
        else
        {
            cout<<"IT IS NOT A TRIANGLE";
        }
        return 0;

}