//Ayesha Amjad 82690
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};
int main()
{
    Node *first= new Node();
    Node *second= new Node();
    Node *third= new Node();
    Node *fourth= new Node();
    Node *fifth= new Node();

    first->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    fifth->data=50;

    //next assigning
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=nullptr;

    //prev assigning
    first->prev=nullptr;
    second->prev=first;
    third->prev=second;
    fourth->prev=third;
    fifth->prev=fourth;
    Node* head=first;
    Node* tail=fifth;

    //Adding 5 to the start.
    Node* newnode1= new Node();
    newnode1->data=5;
    newnode1->prev=nullptr;
    newnode1->next=head;
    head->prev=newnode1;
    head=newnode1;

    //Add 25 in the middle after 20
    Node* newnode2= new Node();
    newnode2->data=25;
    newnode2->prev=second;
    newnode2->next=third;
    second->next=newnode2;
    third->prev=newnode2;

    //Add 60 at the end
    Node* newnode3= new Node();
    newnode3->data=60;
    newnode3->next=nullptr;
    newnode3->prev=fifth;
    fifth->next=newnode3;

    tail=newnode3;

    Node* temp=head;
    cout<<"Forward Traversal: ";
    cout<<endl;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    temp=tail;
    cout<<"Reverse Traversal: ";
    cout<<endl;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}