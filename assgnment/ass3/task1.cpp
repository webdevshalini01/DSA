#include <iostream>
using namespace std;

main()
{
    for (int i = 41; i <= 45; i++)
    {
        for (int j = 41; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}