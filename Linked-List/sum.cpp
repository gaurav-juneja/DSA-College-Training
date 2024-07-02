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

Node *reverse(Node *head)
{
    Node *temp = head;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

Node *add(Node *l1, Node *l2)
{
    l1 = reverse(l1);
    l2 = reverse(l2);
    Node *l3 = new Node(-1);
    Node *t3 = l3;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            sum += l2->data;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        Node *n = new Node(sum % 10);
        t3->next = n;
        t3 = t3->next;
    }
    return reverse(l3->next);
}

int main()
{
    vector<int> l1 = {2, 3, 4}; // reverse represent as 4,3,2
    vector<int> l2 = {5, 6, 7}; // reverse represent as 7,6,5
    Node *head1 = convertArrToLL(l1);
    Node *head2 = convertArrToLL(l2);
    cout << "L1: ";
    print(head1);
    cout << "L2: ";
    print(head2);
    cout << "L3: ";
    Node *l3 = add(head1, head2);
    print(l3); // reverse will be 1197
}