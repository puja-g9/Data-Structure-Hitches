//Q:Find very first missing element in sorted integer array

#include<stdio.h>

int findmissing(int arr[],int low, int high)
{
    if(low>high) //base case
        return low;

    int mid=(low+high)/2;

    if(arr[mid]!=mid)
         return findmissing(arr,low,mid-1); //left half
    else
    return findmissing(arr,mid+1,high); //right half

}

int main()
{
    int arr[]={0,1,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n;

    int missing=findmissing(arr,low,high);
    printf("element missing %d",missing);
}
