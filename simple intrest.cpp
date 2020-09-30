#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float p,r,t,i;
    
    cout<<"------------------------------------"<<endl;
    cout<<"enter principle Amount:";
    cin>>p;
    cout<<"------------------------------------"<<endl;
    cout<<"enter rate of interest:";
    cin>>r;
    cout<<"------------------------------------"<<endl;
    cout<<"enter Number of days:";
    cin>>t;
    cout<<"------------------------------------"<<endl;
    i=(p*r*t)/100;
    
    cout<<"------------------------------------"<<endl;
    cout<<"simple intrest is:"<<i;
    cout<<"------------------------------------"<<endl;
    getch();
    return 0;
}
