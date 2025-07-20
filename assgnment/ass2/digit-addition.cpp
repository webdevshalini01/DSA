#include<iostream>
using namespace std;
main()
{
    int num, first ,last,ans;
    cout<<"enter a number : ";
    cin>>num;
    last=num%10;
    ans = num;
    while (ans >= 10) {
        ans /= 10;
    }
    first = ans;
    cout<<"sum of first and last digit  : "<<first+last<<endl;
}