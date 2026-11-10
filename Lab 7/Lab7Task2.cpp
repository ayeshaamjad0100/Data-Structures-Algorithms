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

    first->data=101;
    second->data=102;
    third->data=103;
    fourth->data=104;
    fifth->data=105;

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

    //Adding 100 to the start.
    Node* newnode1= new Node();
    newnode1->data=100;
    newnode1->prev=nullptr;
    newnode1->next=head;
    head->prev=newnode1;
    head=newnode1;

    //Add 1035 after product 103
    Node* newnode2= new Node();
    newnode2->data=1035;
    newnode2->prev=third;
    newnode2->next=fourth;
    third->next=newnode2;
    fourth->prev=newnode2;

    //Add 106 at the end.
    Node* newnode3= new Node();

    newnode3->data=106;
    newnode3->next=nullptr;
    newnode3->prev=tail;
    tail->next=newnode3;
    tail=newnode3;

    //Delete the first product
    Node *temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;

    //Delete product 104
    newnode2->next=fifth;
    fifth->prev=newnode2;
    delete temp;

    //Delete the last product (newnode3)
    temp=tail;
    tail=tail->prev;
    tail->next=nullptr;
    delete temp;

    temp=head;
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