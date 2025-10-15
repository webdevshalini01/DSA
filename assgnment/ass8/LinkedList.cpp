#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Inserted: " << value << endl;
    }

    void deleteNode(int position)
    {
        if (head == nullptr)
        {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        if (position == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position " << position << endl;
            return;
        }

        Node *current = head;
        Node *prev = nullptr;
        int count = 0;

        while (current != nullptr && count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }

        if (current == nullptr)
        {
            cout << "Position " << position << " is out of range." << endl;
            return;
        }

        prev->next = current->next;
        delete current;
        cout << "Deleted node at position " << position << endl;
    }

    void reverse()
    {
        if (head == nullptr)
        {
            cout << "List is empty. Nothing to reverse." << endl;
            return;
        }

        Node *prev = nullptr;
        Node *current = head;
        while (current != nullptr)
        {
            Node *nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
        cout << "List reversed." << endl;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data;
            if (current->next != nullptr)
            {
                cout << ", ";
            }
            current = current->next;
        }
        cout << endl;
    }

    void search(int position)
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        int count = 0;

        while (current != nullptr)
        {
            if (count == position)
            {
                cout << "Value at position " << position << " is " << current->data << endl;
                return;
            }
            current = current->next;
            count++;
        }

        cout << "Invalid index." << endl;
    }
};