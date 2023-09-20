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
    int n, data;
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
    node *ptr2 = ptr1->next;
    head = ptr2;
    delete ptr1;
    cout << "After deleting the first node" << endl;
    node *ptr3 = head;
    while (ptr3 != NULL)
    {
        cout << ptr3->data << "->";
        ptr3 = ptr3->next;
    }
    cout << "NULL\n";

    return 0;
}
