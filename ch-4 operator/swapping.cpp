#include<iostream>
using namespace std;
main()
{
    // swapping without using third variable (+ , -)
    int a,b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
//   a=a+b;
//   b=a-b;
//   a=a-b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"A\t:"<<a<<endl;
    cout<<"B\t:"<<b<<endl;

}