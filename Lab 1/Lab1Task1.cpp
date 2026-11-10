#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3,sum=0;
float avg;
int arr[5];
cout<<"Enter 5 numbers: "<<endl;
for(int i=0;i<5;i++)
{
    cout<<i+1<<": ";
    cin>>arr[i];
}
for(int i=0;i<5;i++)
{
    sum=sum+arr[i];
}
avg=sum/5;
cout<<"Sum of the numbers is: "<<sum<<endl;
cout<<"Average of the given numbers is: "<<avg<<endl;
}