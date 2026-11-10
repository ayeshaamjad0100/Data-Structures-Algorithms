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
void deleteByValue(Node*& head,int value)
{
    if(head==nullptr)
    {
        cout<<"Value not found"<<endl;
        return;
    }
    if(head->data==value)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr && temp->next->data!=value)
    {
        temp=temp->next;
    }
    if(temp->next==nullptr)
    {
        cout<<"Value not found"<<endl;
        return;
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
    deleteByValue(head,30);
    display(head);
    deleteByValue(head,100);
    display(head);
    return 0;
}