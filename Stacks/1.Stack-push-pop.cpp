#include <iostream>
using namespace std;
#define max_size 50
int top = -1;
int Stack[max_size];
void push(int data)
{
    if (top >= max_size)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        top++;
        Stack[top] = data;
    }
}
int pop()
{
    if (top <= -1)
    {
        cout << "Stack is emty" << endl;
        return -1;
    }
    else
    {
        return Stack[top];
        top--;
    }
}
int peek()
{
    if (top <= -1)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return Stack[top];
    }
}
void print_stack(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, data, popped, peeked;
    cout << "Enter the number of elements of the stack"
         << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element" << i + 1 << ": ";
        cin >> data;
        push(data);
    }
    cout << "The stack is\n";
    print_stack(Stack, n);
    peeked = peek();
    cout << "The peek element is: " << peeked << endl;
    popped = pop();
    cout << "The popped element is: " << popped << endl;

    return 0;
}
