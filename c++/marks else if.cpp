#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks : ";
        cin>>marks;
                if(marks<=100 && marks>=90 )
                {
                     cout<<"OUTSTANDING MARKS";           
                }
                else if(marks<=90 && marks>=80)
                {
                      cout<<"EXCELLENT MARKS";
                }
                else if(marks<=80 && marks>=70)
                {
                    cout<<"GOOD MARKS";
                }
                else if(marks<=70 && marks>=60)
                {
                    cout<<"AVERAGE MARKS ";
                }
                else if (marks<=60 && marks>=50)
                {
                    cout<<"BELOW AVERAGE MARKS";
                }
                else
                {
                    cout<<"POOR MARKS";
                }
    return 0;
}

