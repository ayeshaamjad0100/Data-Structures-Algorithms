#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int search=40;
    int start=0;
    int end=4;
    int index=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==search)
        {
            index=mid;
            break;
        }
        else if(search>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
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