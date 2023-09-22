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
        cout << "Head";
    }
    else
    {
        cout << "Empty linked list\n";
    }
    node *ptr2 = head;
    node *ptr3 = ptr2->next;
    while (ptr3->next != head) // here ptr2 is the trailing pointer.
    {
        ptr2 = ptr3;
        ptr3 = ptr3->next;
    }
    ptr2->next = head;
    delete ptr3;
    cout<<"After deleting the last node of the linked list\n";
    node *ptr4 = head;
    if (head != NULL)
    {
        do
        {
            cout << ptr4->data << "->";
            ptr4 = ptr4->next;
        } while (ptr4 != head);
        cout << "Head\n";
    }
    else
    {
        cout << "Empty linked list" << endl;
    }
    return 0;
}
