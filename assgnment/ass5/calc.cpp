#include <iostream>
#include "function.cpp"
using namespace std;

int main()
{
     int num, a, b;
     do
     {
          cout << "Calculation..." << endl;
          cout << "Press 1 for + (Add)" << endl;
          cout << "Press 2 for - (Substract)" << endl;
          cout << "Press 3 for * (Multiply)" << endl;
          cout << "Press 4 for / (Divide)" << endl;
          cout << "Press 5 for % (Modulus)" << endl;
          cout << "Press 0 for Exit " << endl;
          cout << "Enter your Choice : ";
          cin >> num;

          switch (num)
          {
          case 1:
               system("cls");
               cout << "Add..." << endl
                    << endl;
               inputNumbers(a, b);
               cout << "Add : " << addNumbers(a, b) << endl
                    << endl;
               break;

          case 2:
               system("cls");
               cout << "Subtract..." << endl
                    << endl;
               inputNumbers(a, b);
               cout << "Subtraction : " << subtractNumbers(a, b) << endl
                    << endl;
               break;

          case 3:
               system("cls");
               cout << "Multiply..." << endl
                    << endl;
               inputNumbers(a, b);
               cout << "Multiply : " << multiplyNumbers(a, b) << endl
                    << endl;
               break;

          case 4:
               system("cls");
               cout << "Divide..." << endl
                    << endl;
               inputNumbers(a, b);
               cout << "Divide : " << divisionNumbers(a, b) << endl
                    << endl;
               break;

          case 5:
               system("cls");
               cout << "Modulus..." << endl
                    << endl;
               inputNumbers(a, b);
               cout << "Modulus: " << modulusNumbers(a, b) << endl
                    << endl;
               break;

          case 0:
               cout << endl
                    << "Exiting..." << endl;
               break;

          default:
               cout << "Invalid option. Try again." << endl;
          }

     } while (num != 0);

     return 0;
}