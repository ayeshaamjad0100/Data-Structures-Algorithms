#include<iostream>
using namespace std;
int main()
{
    char* ptr=new char;
    *ptr='Z';
    cout<<"Stored Character: "<<*ptr<<endl;
    delete ptr;
    ptr=nullptr;
    return 0;
}