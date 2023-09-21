#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    //constructor
    // node(int d){
    //     this->data = d;
    //     this->next = NULL;
    // }
};
int main()
{
    int n, data, element;
    node *head = NULL;
    cout << "Enter the number of nodes of the circular linked list\n";
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
        cout << "head\n";
    }
    else
    {
        cout << "Empty linked list\n";
    }
    cout << "Enter the data of the node to be inserted at the beginning\n";
    cin >> element;
    node *newnode = new node;
    // node *p = head;
    newnode->data = element;
    newnode->next = head;
    node *ptr2 = head;
    while (ptr2->next != head)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = newnode;
    head = newnode;
    cout << "After inserting at the beginning\n";
    node *ptr3 = head;

    if (head != NULL)
    {
        do
        {
            cout << ptr3->data << "->";
            ptr3 = ptr3->next;
        } while (ptr3 != head);
        cout << "Head\n";
    }
    else
    {
        cout << "Empty linked list";
    }
    return 0;
}
