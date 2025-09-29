#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the Array size: ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    cout <<"negative element of an array :";
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << "\t";
        }
    }
}