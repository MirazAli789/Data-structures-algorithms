#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    //  node(int d){
    //      this->data = d;
    //      this->next = NULL;
    //  }
};
int main()
{
    int n, data, pos;
    node *head = NULL;
    cout << "Enter number of nodes" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> data;
        node *new1 = new node;
        new1->data = data;

        if (head == NULL)
        {
            head = new1;
            new1->next = head;
        }
        else
        {
            node *ptr = head;
            while (ptr->next != head)
            {
                ptr = ptr->next;
            }
            ptr->next = new1;
            new1->next = head;
        }
    }
    cout << "The circular linked list is\n";
    node *ptr1 = head;
    if (head != NULL)
    {
        do
        {
            cout << ptr1->data << "->";
            ptr1 = ptr1->next;
        } while (ptr1 != head);
        cout << "Head" << endl;
    }
    else
    {
        cout << "Empty linked list\n";
    }
    cout << "Enter the position from where you want to delete a node\n";
    cin >> pos;
    node *ptr2 = head;
    node *ptr3 = ptr2->next;
    for (int i = 1; i < (pos - 1); i++) // here ptr2 is the lagging pointer.
    {
        ptr2 = ptr3;
        ptr3 = ptr3->next;
    }
    ptr2->next = ptr3->next;
    delete ptr3;
    node *ptr4 = head;
    if (head != NULL)
    {
        do
        {
            cout << ptr4->data << "->";
            ptr4 = ptr4->next;
        } while (ptr4 != head);
        cout << "head\n";
    }
    else
    {
        cout << "Empty linked list\n";
    }
    return 0;
}
