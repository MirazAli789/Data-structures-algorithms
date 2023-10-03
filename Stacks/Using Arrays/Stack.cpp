//Stack using arrays
#include <iostream>
using namespace std;
class Stack
{
public:
    //properties
    int *arr;
    int size;
    int top;
    //beahaviour
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int(size);
    }
    void push(int data)
    {
        if (size-top>=1)
        {
            top++;
            arr[top] = data;
        }
        else{
            cout<<"The stack is full\n";
        }
    }
    void pop(){
        if (top<=-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else{
            top--;
        }
    }
    int peek(){
        if (top<=-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }
    bool isempty(){
        if (top<=-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Peek element = "<<st.peek()<<endl;
    st.pop();
    cout<<"Peek element = "<<st.peek()<<endl;
    
    cout<<st.isempty();
    return 0;
}
