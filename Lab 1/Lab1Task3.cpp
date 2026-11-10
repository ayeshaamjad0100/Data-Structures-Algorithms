#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    int *ptr=&x;
    cout<<"Number before changing: "<<x<<endl;
    cout<<"Value of &x: "<<&x<<endl;
    cout<<"Value of pointer: "<<ptr<<endl;
    cout<<"Value of *pointer: "<<*ptr<<endl;
    *ptr=50;
    cout<<"Number after changing: "<<*ptr<<endl;
    return 0;
}