#include "LinkedList.cpp"

int main()
{
    LinkedList list;
    int choice, value;

    do
    {
        cout << endl
             << "--- MENU ---" << endl;
        cout << "1. Insert value" << endl;
        cout << "2. Display list" << endl;
        cout << "3. Reverse list" << endl;
        cout << "4. Search value" << endl;
        cout << "5. Delete value" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

        case 2:
            cout << "Linked List: ";
            list.display();
            break;

        case 3:
            list.reverse();
            break;

        case 4:
            cout << "Enter position to search: ";
            cin >> value;
            list.search(value);
            break;

        case 5:
            cout << "Enter position to delete: ";
            cin >> value;
            list.deleteNode(value);
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}