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

int search(Node *head, int val)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {80, 6, 32, 7, 94};
    Node *head = convertArrToLL(arr);
    cout << search(head, 7);
}
