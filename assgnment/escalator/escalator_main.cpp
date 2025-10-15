#include "Escalator.cpp"

int main()
{
    int size;
    cout << "Enter Size of Stack: ";
    cin >> size;

    Stack stack(size);
    int choice;
    int element;

    do
    {
        cout << "Enter 1 to Push the Element." << endl;
        cout << "Enter 2 to Pop the Element." << endl;
        cout << "Enter 3 to Peek the Element." << endl;
        cout << "Enter 4 to Display the Element." << endl;
        cout << "Enter 5 to check IsEmpty." << endl;
        cout << "Enter 6 to check IsFull." << endl;
        cout << "Enter 0 to Exit......" << endl;
        cout << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "Enter Element: ";
            cin >> element;
            stack.push(element);
            cout << endl;
            break;

        case 2:
            cout << endl;
            stack.pop();
            cout << endl;
            break;

        case 3:
            cout << endl;
            stack.top_element();
            cout << endl;
            cout << endl;
            break;

        case 4:
            cout << endl;
            stack.display();
            cout << endl;
            break;

        case 5:
            cout << endl;
            stack.isEmpty() ? cout << "Stack is Empty." : cout << "Stack is not empty.";
            cout << endl;
            cout << endl;
            break;

        case 6:
            cout << endl;
            stack.isFull() ? cout << "Stack is Full..." : cout << "Stack is not Full...";
            cout << endl;
            break;

        case 0:
            cout << endl;
            cout << "Exiting..........." << endl;
            cout << endl;
            break;

        default:
            cout << endl;
            cout << "Invalid choice......" << endl;
            cout << endl;
            break;
        }

    } while (choice != 0);
}