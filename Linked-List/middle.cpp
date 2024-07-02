#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // return slow;
    Node *temp = slow;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return slow;
}

int main()
{
    vector<int> l1 = {1, 2, 3, 4, 5};    // odd
    vector<int> l2 = {1, 2, 3, 4, 5, 6}; // even
    Node *head1 = convertArrToLL(l1);
    Node *head2 = convertArrToLL(l2);
    cout << "Middle of L1 is: ";
    Node *l3 = middle(head1);
    cout << "Middle of L2 is: ";
    Node *l4 = middle(head2);
    // cout << "Middle of L2 is: " << l4->data << endl;

    return 0;
}