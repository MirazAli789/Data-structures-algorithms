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
void traversal(node *head)
{
    node *ptr = head;
    if (head != NULL)
    {
        do
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        } while (ptr != head);
        cout << "Head\n";
    }
    else
    {
        cout << "Empty linked list\n";
    }
}
node *insert_at_begin(node *head, int element)
{
    node *ptr = head;
    node *ptr1 = ptr->next;
    node *new1 = new node;
    new1->data = element;
    new1->next = ptr;
    while (ptr1->next != head)
    {
        ptr1 = ptr1->next;
    }
    ptr1->next = new1;
    head = new1;
    return head;
}
node *insert_at_end(node *head, int element)
{
    node *ptr = head;
    node *new1 = new node;
    new1->data = element;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = new1;
    new1->next = head;
    return head;
}
node *insert_at_any_pos(node *head, int pos, int element)
{
    node *ptr = head;
    node *new1 = new node;
    new1->data = element;
    for (int i = 1; i < (pos - 1); i++)
    {
        ptr = ptr->next;
    }
    new1->next = ptr->next;
    ptr->next = new1;
    return head;
}
int main()
{
    int n, data, element, pos, i = 0, choice;
    node *head = NULL;
    while (i < 100)
    {
        cout << "Enter the number of nodes of the circular linked list." << endl;
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
        traversal(head);

        cout << "Enter 1 for inserting at beginning\n Enter 2 for inserting at end \n Enter 3for inserting at any position\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the data of the node to be inserted at the beginning" << endl;
            cin >> element;
            cout << "After inserting the node, the linked list is\n";
            traversal(insert_at_begin(head, element));
            break;
        case 2:
            cout << "Enter the data of the node to be inserted at the end" << endl;
            cin >> element;
            cout << "After inserting the node, the linked list is\n";
            traversal(insert_at_end(head, element));
            break;
        case 3:
            cout << "Enter the position where the node is to be inserted\n";
            cin >> pos;
            cout << "Enter the data of the node to be inserted at position " << pos;
            cin >> element;
            cout << "After inserting the node, the linked list is\n";
            traversal(insert_at_any_pos(head, pos, element));
            break;
        default:
            break;
        }

        int decide;
        cout << "Enter 1 if you want to continue, else enter any other number to exit\n";
        cin >> decide;
        if (decide == 1)
        {
            main();
        }
        else
        {
            break;
        }
        i++;
    }
    return 0;
}
