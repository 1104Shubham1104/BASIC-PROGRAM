#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER: ";
    cin>>b;
    cout<<"ENTER THE THIRD NUMBER : ";
    cin>>c;
        if(a>b)
        {
            if(a>c)
            {
                cout<<"A IS GREATEST";
            }
            else{
                cout<<"C IS GREATEST";
            }
        }
        else
        {
             if(b>c)
            {
                cout<<"B IS GREATEST";
            }
            else
            {
                cout<<"C IS GREATEST";
            }

          }
        return 0;

}