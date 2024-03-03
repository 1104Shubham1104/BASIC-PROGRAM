#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THE FIRST PERSON AGE : ";
    cin>>a;
    cout<<"ENTER THE SECOND PERSON AGE : ";
    cin>>b;
    cout<<"ENTER THE THIRD PERSON AGE : ";
    cin>>c;
        if(a<b)
        {
            if(a<c)
            {
                cout<<"A IS YOUNGEST";
            }
            else
            {
                cout<<"C IS YOUNGEST";
            }
        }
        else
        {
             if(b<c)
            {
                cout<<"B IS YOUNGEST";
            }
            else
            {
                cout<<"C IS YOUNGEST";
            }

          }
        return 0;

}