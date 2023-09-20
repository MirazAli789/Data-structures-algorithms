#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    int n, data, element, pos;
    node *head = NULL, *tail = NULL;
    cout << "Enter number of nodes" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> data;
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    cout << "The linked list is" << endl;
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;

    node *ptr1 = head;
    cout << "Enter the position you want to insert an element a node \n";
    cin >> pos;
    cout << "Enter the data of the node you want to insert at position " << pos << endl;
    cin >> element;
    node *new1 = new node;
    new1->data = element;
    for (int i = 1; i < (pos-1); i++)
    {
        ptr1 = ptr1->next;
    }
    new1->next = ptr1->next;
    ptr1->next = new1;
    cout<<"After inserting "<<element<<"at position "<<pos<<"the linked list is\n";
    node *ptr2 = head;
    while (ptr2!=NULL)
    {
        cout<<ptr2->data<<"->";
        ptr2 = ptr2->next;
    }
    cout<<"NULL\n";
    return 0;
}
