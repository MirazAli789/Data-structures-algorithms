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
    int n, data;
    node *head = NULL;
    cout << "Enter number of nodes" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> data;
        node *new1 = new node;
        new1->data = data;
        // if there is only one node..
        if (head == NULL)
        {
            head = new1;
            new1->next = head;
        }
        // but if there is more than one node, we have to insert at the end.
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
        cout << "Head";
    }
    else
    {
        cout << "Empty linked list\n";
    }
    node *ptr2 = head;
    node *ptr3 = ptr2->next;
    while (ptr3->next != head)
    {
        ptr3 = ptr3->next;
    }
    node *ptr4 = ptr2->next;
    ptr3->next = ptr4;
    head = ptr4;
    delete ptr2;
    cout <<"\nAfter deleting the first node of the linked list\n";
    node *ptr5 = head;
    if (head != NULL)
    {
        do
        {
            cout << ptr5->data << "->";
            ptr5 = ptr5->next;
        } while (ptr5 != head);
        cout << "head\n";
    }
    else
    {
        cout << "Empty linked list\n";
    }
    return 0;
}
