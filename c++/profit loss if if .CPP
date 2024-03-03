#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter the Cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter the Selling price : ";
    cin>>sp;    
        
             if(cp<sp)
             {
                cout<<"PROFIT";
             }
             if(cp>sp)
            {
                cout<<"LOSS";
            }
            if(cp==sp)
            {
                cout<<"NO PROFIT NO LOSS";
            }
             return 0;
              
}