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

Node *insertHead(Node *head, int insert)
{
    return new Node(insert, head);

    // or
    //  Node* temp = new Node(insert);
    //  temp->next = head;
    //  return temp;
}

Node *insertTail(Node *head, int insert)
{
    if (head == NULL)
    {
        return new Node(insert);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newValue = new Node(insert);
    temp->next = newValue;
    return head;
}

Node *insertPos(Node *head, int val, int n)
{
    if (head == NULL)
    {
        if (n == 1)
        {
            return new Node(val);
        }
        else
        {
            return head;
        }
    }
    if (n == 1)
    {
        return new Node(val, head);
    }
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        if (count == n - 1)
        {
            Node *newValue = new Node(val);
            newValue->next = temp->next;
            temp->next = newValue;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertBeforeValue(Node *head, int val, int n)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next->data == n)
    {
        return new Node(val, head);
    }
    Node *temp = head;
    bool found = false;
    while (temp->next != NULL)
    {
        if (temp->next->data == n)
        {
            Node *newValue = new Node(val);
            newValue->next = temp->next;
            temp->next = newValue;
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (found == false)
    {
        cout << "Element not found." << endl;
    }
    return head;
}

int main()
{
    vector<int> arr = {5, 9, 3, 6};
    Node *head = convertArrToLL(arr);
    cout << "Original: ";
    print(head);
    head = insertHead(head, 30);
    // head = new Node(50, head); // also works
    cout << "After Insertion in Head: ";
    print(head);
    head = insertTail(head, 60);
    cout << "After Insertion in Tail: ";
    print(head);
    head = insertPos(head, 50, 4);
    cout << "After Insertion at given Position: ";
    print(head);
    head = insertBeforeValue(head, 40, 50);
    cout << "After Insertion before the given Value: ";
    print(head);
}