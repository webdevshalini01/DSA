#include <iostream>
using namespace std;

class Escalator
{
public:
    virtual void push(int element) = 0;
    virtual void pop() = 0;
    virtual void top_element() = 0;
    virtual void display() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public Escalator
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element)
    {
        if (this->top == this->size - 1)
        {
            cout << "Stack Overflow." << endl;
        }
        else
        {
            this->top++;
            this->arr[this->top] = element;
        }
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack UnderFlow." << endl;
        }
        else
        {
            cout << "Element Popped: " << this->arr[this->top] << endl;
            this->top--;
        }
    }

    void top_element()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Top Element: " << this->arr[this->top] << endl;
        }
    }

    void display()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Output : ";
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return this->top == -1;
    }

    bool isFull()
    {
        return this->top == this->size - 1;
    }
};