#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main()
{
    Node* head=nullptr;
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
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
    int choice;
    do
    {
        cout<<"\n1.Insert at Start"<<endl;
        cout<<"2.Insert at End"<<endl;
        cout<<"3.Insert in Middle"<<endl;
        cout<<"4.Display List"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1)
        {
            int value;
            cout<<"Enter value: ";
            cin>>value;
            Node* newnode=new Node;
            newnode->data=value;
            newnode->next=head;
            head=newnode;
        }
        else if(choice==2)
        {
            int value;
            cout<<"Enter value: ";
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
        }
        else if(choice==3)
        {
            int search,value;
            cout<<"Enter value after which to insert: ";
            cin>>search;
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
        }
        else if(choice==4)
        {
            Node* temp=head;
            cout<<"List: ";
            while(temp!=nullptr)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
        else if(choice==5)
        {
            cout<<"Exit";
        }
        else
        {
            cout<<"Invalid choice";
        }
    }
    while(choice!=5);
    return 0;
}