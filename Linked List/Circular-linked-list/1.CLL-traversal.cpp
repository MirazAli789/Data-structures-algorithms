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
    return 0;
}
