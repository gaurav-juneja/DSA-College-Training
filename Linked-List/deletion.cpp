#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node* next1)
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

Node* convertArrToLL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size();i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* delHead(Node* head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* delTail(Node* head)
{
    Node* temp = head;
    if(head==NULL || head->next==NULL) return NULL;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

Node* delPos(Node*head, int pos)
{
    if(head==NULL) return head; // if linkedlist is empty
    if(pos ==1) return delHead(head); // if position is 1 then remove head

    // for any other position
    int count = 0;
    Node* prev = NULL;
    Node* temp = head;
    while(temp!=NULL)
    {
        count++;
        if(count==pos)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
}
Node* delVal(Node*head, int val)
{
    if(head==NULL) return head; // if linkedlist is empty
    if(head->data == val) return delHead(head); // if value is at 1st pos then remove head

    // for any other value
    Node* prev = NULL;
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data == val)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
}

int main()
{
    vector <int> arr = {80,6,32,8,7,94};
    Node* head = convertArrToLL(arr);
    cout<<"Original: ";
    print(head);
    cout<<"Delete Head: ";
    head = delHead(head);
    print(head);
    cout<<"Delete Tail: ";
    head = delTail(head);
    print(head);
    cout<<"Delete given Position: ";
    head = delPos(head,2);
    print(head);
    cout<<"Delete given Value: ";
    head = delVal(head,8);
    print(head);
}
