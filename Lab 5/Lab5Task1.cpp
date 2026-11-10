#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    Node* head=nullptr;
    Node* temp=nullptr;
    for(int i=1;i<=n;i++)
    {
        Node* newnode=new Node;
        cout<<"Enter the node value: ";
        cin>>newnode->data;
        newnode->next=nullptr;
        if(head==nullptr)
        {
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    cout<<"Original List: ";
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    Node* newnode=new Node;
    cout<<"Enter value you want to insert at the beginning: ";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}