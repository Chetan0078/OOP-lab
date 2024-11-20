#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{
private:
    T *arr;
    int capacity;
    int top;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(T element)
    {
        if (top == capacity - 1)
        {
            cout << "Stack overflow! Cannot push " << element << endl;
            return;
        }
        arr[++top] = element;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Cannot pop an element." << endl;
            return;
        }
        top--;
    }

    T peek() const
    {
        if (isEmpty())
        {
            throw runtime_error("Stack is empty! No element to peek.");
        }
        return arr[top];
    }

    bool isEmpty() const
    {
        return top == -1;
    }

    bool isFull() const
    {
        return top == capacity - 1;
    }

    int size() const
    {
        return top + 1;
    }
};

int main()
{
    try
    {
        Stack<int> integerStack(5);

        integerStack.push(10);
        integerStack.push(20);
        integerStack.push(30);

        cout << "Top element: " << integerStack.peek() << endl;

        integerStack.pop();
        cout << "Top element after pop: " << integerStack.peek() << endl;

        cout << "Is stack empty? " << integerStack.isEmpty() << endl;

        Stack<string> stringStack(3);
        stringStack.push("World");
        stringStack.push("Hello");

        cout << "string at top : " << stringStack.peek() << endl;
        stringStack.pop();

        cout << "string at top : " << stringStack.peek() << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}