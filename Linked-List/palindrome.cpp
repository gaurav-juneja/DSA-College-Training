#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

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
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

bool palindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *newHead = reverse(slow->next);
    Node *first = head;
    Node *second = newHead;
    while (second != NULL)
    {
        if (first->data != second->data)
        {
            reverse(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverse(newHead);
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3,3, 2, 1};
    Node *head = convertArrToLL(arr);
    cout << "Original Linked List: ";
    print(head);
    head = reverse(head);
    cout << "Reversed Linked List: ";
    print(head);

    bool isPalindrome = palindrome(head);
    if ((isPalindrome))
    {
        cout << "Linked List is a palindrome" << endl;
    }
    else
    {
        cout << "Linked List is not a palindrome" << endl;
    }

    return 0;
}