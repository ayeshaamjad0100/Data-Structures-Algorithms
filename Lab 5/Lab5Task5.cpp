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
    cout<<"Enter value before which you want to insert: ";
    cin>>search;
    Node* current=head;
    Node* previous=nullptr;
    while(current!=nullptr&&current->data!=search)
    {
        previous=current;
        current=current->next;
    }
    if(current==nullptr)
    {
        cout<<"Value not found";
    }
    else
    {
        int value;
        cout<<"Enter new value: ";
        cin>>value;
        Node* newnode=new Node;
        newnode->data=value;
        if(previous==nullptr)
        {
            newnode->next=head;
            head=newnode;
        }
        else
        {
            newnode->next=current;
            previous->next=newnode;
        }
    }
    Node* temp=head;
    cout<<"Linked List: ";
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    system("pause");
    return 0;
}