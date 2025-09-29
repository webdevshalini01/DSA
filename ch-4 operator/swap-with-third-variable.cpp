#include<iostream>
using namespace std;
main()
{
    // swapping value using with third variable
    int a,b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    int c=a;
    a=b;
    b=c;
    cout<<"A\t:"<<a<<endl;
    cout<<"B\t:"<<b<<endl;
}