#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

// Push Operation
void push(int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        stack[++top] = value;
        cout << value << " pushed into stack." << endl;
    }
}

// Pop Operation
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        cout << stack[top--] << " popped from stack." << endl;
    }
}

// Peek Operation
void peek()
{
    if (top == -1)
    {
        cout << "Stack is Empty!" << endl;
    }
    else
    {
        cout << "Top Element: " << stack[top] << endl;
    }
}

// Display Operation
void display()
{
    if (top == -1)
    {
        cout << "Stack is Empty!" << endl;
    }
    else
    {
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}
