#include<iostream>
using namespace std;
int main()
{
int arr[10];
int positive=0,negative=0,zero=0;
cout<<"Enter 10 digits: "<<endl;
for(int i=0;i<10;i++)
{
    cout<<i+1<<": ";
    cin>>arr[i];
    if(arr[i]>0)
        positive++;
    else if(arr[i]<0)
        negative++;
    else
        zero++;
}
cout<<"There are "<<positive<<" positive numbers in the obtained list."<<endl;
cout<<"There are "<<negative<<" negative numbers in the obtained list."<<endl;
cout<<"There are "<<zero<<" zero numbers in the obtained list."<<endl;
return 0;
}