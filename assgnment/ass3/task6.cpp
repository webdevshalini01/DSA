#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}