#include <bits/stdc++.h>
using namespace std;
class node{
    public:

    int data;
    node *next;

    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node * reversedLinkedList(node *head)
{
    node *temp = head;
    node *prev = NULL;

    while(temp != NULL)
    {
        node *front = temp->next;
        temp -> next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

void printLinekdList (node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(3);
    head->next->next = new node(2);
    head->next->next->next = new node(4);
    
    cout << "Original Linked List: ";
    printLinekdList(head);

    head = reversedLinkedList(head);

    cout << "Reversed Linked List: ";
    printLinekdList(head);

    return 0;
}