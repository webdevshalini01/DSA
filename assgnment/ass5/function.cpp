#include <iostream>
using namespace std;

// Input Function
void inputNumbers(int &x, int &y)
{
    cout << "Enter First Number: ";
    cin >> x;

    cout << "Enter Second Number: ";
    cin >> y;
}

// Addition function
int addNumbers(int x, int y)
{
    return x + y;
}

// Subtraction Function
int subtractNumbers(int x, int y)
{
    return x - y;
}

// Multiplication Function
int multiplyNumbers(int x, int y)
{
    return x * y;
}

// Division Function
int divisionNumbers(int x, int y)
{
    if (y == 0)
    {
        cout << "Error: Cannot divide by zero." << endl;
        return 0;
    }
    return x / y;
}

// Percentage Function
int modulusNumbers(int x, int y)
{
    if (y == 0)
    {
        cout << "Error: Cannot perform modulus by zero." << endl;
        return 0;
    }
    return x % y;
}