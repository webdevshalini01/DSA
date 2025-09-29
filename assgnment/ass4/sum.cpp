#include <iostream>
using namespace std;

main()
{
    // Sum of Elements in row and column of 2D array..

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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Row sum
    int rInput;
    cout << endl
         << "Enter row index to sum: ";
    cin >> rInput;

    if (rInput >= 0 && rInput < row)
    {
        int rowSum = 0;
        cout << "Elements of row index " << rInput << ": ";
        for (int j = 0; j < col; j++)
        {
            cout << a[rInput][j];
            rowSum += a[rInput][j];
            if (j != col - 1)
                cout << ", ";
        }
        cout << endl
             << "Sum of row index " << rInput << ": " << rowSum << endl;
    }
    else
    {
        cout << "Invalid row index!" << endl;
    }

    // Column sum
    int cInput;
    cout << endl
         << "Enter column index to sum: ";
    cin >> cInput;

    if (cInput >= 0 && cInput < col)
    {
        int colSum = 0;
        cout << "Elements of column index " << cInput << ": ";
        for (int i = 0; i < row; i++)
        {
            cout << a[i][cInput];
            colSum += a[i][cInput];
            if (i != row - 1)
                cout << ", ";
        }
        cout << endl
             << "Sum of column index " << cInput << ": " << colSum << endl;
    }
    else
    {
        cout << "Invalid column index!" << endl;
    }
}