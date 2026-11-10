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
void deleteAtStart(Node*& head)
{
    Node* temp=head;
    head=head->next;
    delete temp;
}
int main()
{
    Node* head=new Node{10,nullptr};
    Node* second=new Node{20,nullptr};
    Node* third=new Node{30,nullptr};
    Node* fourth=new Node{40,nullptr};
    Node* fifth=new Node{50,nullptr};
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    display(head);
    deleteAtStart(head);
    display(head);
    deleteAtStart(head);
    display(head);
    return 0;
}