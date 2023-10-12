#include <iostream>
#include <string>
using namespace std;
class Stack
{
public:
    // properties
    char *arr;
    int size;
    int top;
    // beahaviour
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new char(size);
    }
    void push(char data)
    {
        if (size - top >= 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "The stack is full\n";
        }
    }
    char pop()
    {
        if (top <= -1)
        {
            return -1;
        }
        else
        {
            char item = arr[top];
            top--;
            return item;
        }
    }
    char peek()
    {
        if (top <= -1)
        {
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    int isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isfull()
    {
        if (top == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int is_operator(char c) //checks if the current infix is a operator or not.
    {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    int ISP(char c)
    { // in stack priority
        if (c == '+' || c == '-')
        {
            return 2;
        }
        else if (c == '*' || c == '/')
        {
            return 4;
        }
        else if (c == '^')
        {
            return 5;
        }
    }
    int ICP(char c)
    { // incoming priority
        if (c == '+' || c == '-')
        {
            return 1;
        }
        else if (c == '*' || c == '/')
        {
            return 3;
        }
        else if (c == '^')
        {
            return 6;
        }
    }
    string infix_postfix(string infix)
    {
        Stack s(100);
        char *postfix = new char[infix.length() + 1];
        int i = 0; // for scanning the infix expression
        int j = 0; // for putting the values into postfix expression.
        while (infix[i] != '\0')
        {
            if (is_operator(infix[i]) == -1)  //if it is a operator then show it in the output
            { 
                postfix[j] = infix[i];
                j++;
                i++;
            }
            else
            {
                if (ICP(infix[i]) > (ISP(s.peek())))
                {
                    s.push(infix[i]);
                    i++;
                }
                else
                {
                    postfix[j] = s.pop();
                    j++;
                }
            }
        }
        while (s.isempty() != 1)
        {
            postfix[j] = s.pop();
            j++;
        }
        postfix[j] = '\0';
        string ans(postfix); // converts char array to a string

        return ans;
    }
};
int main()
{
    Stack s(100);
    string infix = "a^b";
    string postfix = s.infix_postfix(infix);
    cout << endl;
    cout << "postfix expression = " << postfix;
    return 0;
}
