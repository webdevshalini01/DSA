#include <iostream>
using namespace std;

main()
{
    // Transpose of 2D array

    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int a[row][col];

    cout << endl
         << "Array Input" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "Array Output" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}