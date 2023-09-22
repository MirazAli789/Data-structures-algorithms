#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    // node(int d){
    //     this->data = d;
    //     this->next = NULL;
    // }
};
int main()
{
    int n, data, element, pos;
    node *head = NULL;
    cout << "Enter number of nodes of the linked list" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element" << i + 1 << ": ";
        cin >> data;
        node *newnode = new node;
        newnode->data = data;
        if (head == NULL)
        {
            head = newnode;
            newnode->next = head;
        }
        else
        {
            node *ptr = head;
            while (ptr->next != head) // important line
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = head;
        }
    }
    cout << "The cicular linked list is" << endl;
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
    cout << "Enter the position where the node is to be inserted\n";
    cin >> pos;
    cout << "Enter the data of the node to be inserted at " << pos << " position" << endl;
    cin >> element;
    node *new1 = new node;
    new1->data = element;
    node *ptr2 = head;
    for (int i = 1; i < (pos - 1); i++)
    {
        ptr2 = ptr2->next;
    }
    new1->next = ptr2->next;
    ptr2->next = new1;
    cout << "After inserting " << element << " at " << pos << " position"
         << "the linked list is\n";
    node *ptr3 = head;
    if (head != NULL)
    {
        do
        {
            cout << ptr3->data << "->";
            ptr3 = ptr3->next;
        } while (ptr3 != head);
        cout << "Head" << endl;
    }
    else
    {
        cout << "Empty linked list";
    }
    return 0;
}
