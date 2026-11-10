#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int *ptr1=&num1;
    int *ptr2=&num2;
    cout<<"Before Swapping: "<<endl;
    cout<<"First Number: "<<num1<<endl;
    cout<<"Second Number: "<<num2<<endl;
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<"After Swapping: "<<endl;
    cout<<"First Number: "<<num1<<endl;
    cout<<"Second Number: "<<num2<<endl;
}