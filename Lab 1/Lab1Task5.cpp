#include<iostream>
using namespace std;
struct Student{
    int Roll_Number;
    string Name;
    int Marks;
};
int main()
{
    Student s1;
    cout<<"Enter Student ID: ";
    cin>>s1.Roll_Number;
    cout<<"Enter Student Name: ";
    cin>>s1.Name;
    cout<<"Enter Student Marks: ";
    cin>>s1.Marks;
    cout<<"Student details:"<<endl;
    cout<<"Student ID: "<<s1.Roll_Number<<" Name: "<<s1.Name<<" Marks: "<<s1.Marks<<endl;
    if((s1.Marks<=100)&&(s1.Marks>=50))
        cout<<"Student is Pass.";
    else if(s1.Marks<50)
        cout<<"Student is Fail.";
    return 0;
}