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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *delHead(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *delPos(Node *head, int pos)
{
    int count = 0;
    Node *temp = head;

    if (head == NULL)
        return head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int end = count - pos; // to find the position from end

    // If position is greater than the number of nodes
    if (pos > count)
        return head;

    // If the node to be deleted is the head
    if (end == 0)
    {
        delHead(head);
    }

    // Find the node to delete
    Node *prev = NULL;
    Node *move = head;
    for (int i = 0; i < end; i++)
    {
        prev = move;
        move = move->next;
    }

    prev->next = move->next;
    delete move;

    return head;
}

int main()
{
    vector<int> arr = {80, 6, 32, 8, 7, 94};
    Node *head = convertArrToLL(arr);
    cout << "Original: ";
    print(head);
    cout << "Delete given Position from end: ";
    head = delPos(head, 4);
    print(head);
    return 0;
}
