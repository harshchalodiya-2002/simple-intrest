#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float p,r,t,i;
    cout<<"enter principle:";
    cin>>p;
    cout<<"enter rate:";
    cin>>r;
    cout<<"enter time:";
    cin>>t;
    i=(p*r*t)/100;
    cout<<"simple intrest is:"<<i;
    getch();
    return 0;
}
