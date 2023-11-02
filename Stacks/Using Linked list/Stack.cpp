//Stack using linked list
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int data;
    Stack *next;
    Stack *top;
    // constructor
    Stack()
    {
        top = NULL;
    }

    void push(int d)
    {
        Stack *n1 = new Stack; // As stack is implemented using linked list, we need not to worry about stack overflowing.
        n1->data = d;
        n1->next = top;
        top = n1;
    }
    int pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            Stack *ptr = top->next;
            int item = top->data;
            top = ptr;
            return item;
        }
    }
    int peek()
    {
        if (top == NULL) //checking whether the stack is empty or not.
        {
            cout << "Stack is empty\n";
        }
        else
        {
            int item = top->data;
            return item;
        }
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.pop();
    s.push(13);
    s.push(24);
    s.pop();
    s.push(3);
    cout<<"Peek element = "<<s.peek()<<endl;
    return 0;
}
