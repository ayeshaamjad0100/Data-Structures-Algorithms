#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void display(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAtEnd(Node*& head)
{
    Node* temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}
void deleteAtPosition(Node*& head,int position)
{
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp=head;
    for(int i=1;i<position-1;i++)
    {
        temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=deleteNode->next;
    delete deleteNode;
}
int main()
{
    Node* head=new Node{10,nullptr};
    Node* second=new Node{20,nullptr};
    Node* third=new Node{30,nullptr};
    Node* fourth=new Node{40,nullptr};
    head->next=second;
    second->next=third;
    third->next=fourth;
    display(head);
    deleteAtEnd(head);
    display(head);
    deleteAtPosition(head,2);
    display(head);
    return 0;
}