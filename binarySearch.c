#include<stdio.h>
#include<stdbool.h>

bool search(int start,int end,int size,int key,int arr[]);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    printf("search result: %d",search(0,7,8,5,arr));

}

bool search(int start,int end,int size,int key,int arr[])
{
    int mid=start+(end-start)/2;
    if (mid<0 || mid>size)
    {
        return false;
    }
    
    if (arr[mid]==key)
    {
        return true;
        
    }
    else if (arr[mid]>key)
    {
        search(start,mid-1,size,key,arr);
    }
    else
    {
        search(mid+1,end,size,key,arr);
    }

}