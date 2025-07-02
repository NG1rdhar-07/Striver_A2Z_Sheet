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

node *getMiddle(node *head)
{
    node *slow = head;
    node *fast = head;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(69);
    head->next->next->next->next = new node(4);
    head->next->next->next->next->next = new node(5);
    head->next->next->next->next->next->next = new node(96);

    node* middleNode = getMiddle(head);

    cout << "The middle node value is: " << middleNode->data << endl;

    return 0;
}