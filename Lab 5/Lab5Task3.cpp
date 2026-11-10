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
    int search;
    cout<<"Enter value after which you want to insert: ";
    cin>>search;
    int value;
    cout<<"Enter new value: ";
    cin>>value;
    Node* temp=head;
    while(temp!=nullptr&&temp->data!=search)
    {
        temp=temp->next;
    }
    if(temp==nullptr)
    {
        cout<<"Value not found";
    }
    else
    {
        Node* newnode=new Node;
        newnode->data=value;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    temp=head;
    cout<<"\nLinked List: ";
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}