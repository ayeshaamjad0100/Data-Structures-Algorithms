#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int search=40;
    int index=-1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    {
        cout<<"40 found at index "<<index;
    }
    else
    {
        cout<<"40 not found";
    }
    return 0;
}