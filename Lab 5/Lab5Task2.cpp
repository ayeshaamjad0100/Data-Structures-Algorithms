#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main()
{
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    Node* head=nullptr;
    for(int i=1;i<=n;i++)
    {
        Node* newnode=new Node;
        cout<<"Enter value: ";
        cin>>newnode->data;
        newnode->next=nullptr;
        if(head==nullptr)
        {
            head=newnode;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    int value;
    cout<<"Enter value to insert at end: ";
    cin>>value;
    Node* newnode=new Node;
    newnode->data=value;
    newnode->next=nullptr;
    if(head==nullptr)
    {
        head=newnode;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    Node* temp=head;
    cout<<"Linked List: ";
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}