#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Node class represents a
// node in a linked list
class Node
{
public:
    // Data stored in the node
    int data;

    // Pointer to the next node in the list
    Node *next;

    // Constructor with both data and
    // next node as parameters
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newHead = reverse(head->next);

    // Save a reference to the node following
    // the current 'head' node.
    Node *front = head->next;

    // Make the 'front' node point to the current
    // 'head' node in the reversed order.
    front->next = head;

    // Break the link from the current 'head' node
    // to the 'front' node to avoid cycles.
    head->next = NULL;

    // Return the 'newHead,' which is the new
    // head of the reversed linked list.
    return newHead;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArrToLL(arr);
    cout << "Original Linked List: ";
    print(head);
    head = reverse(head);
    cout << "Reversed Linked List: ";
    print(head);

    return 0;
}