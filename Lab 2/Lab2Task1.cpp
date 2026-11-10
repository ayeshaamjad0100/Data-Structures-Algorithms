#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int* pointer=arr;
    int even=0,odd=0;
    for(int i=0;i<5;i++)
    {
        pointer=&arr[i];
        if(*pointer%2==0)
        even++;
        else
        odd++;
    }
    cout<<"Even Numbers:"<<even<<endl;
    cout<<"Odd Numbers:"<<odd<<endl;
}