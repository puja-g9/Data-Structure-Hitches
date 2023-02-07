//Q: Find floor in a sorted integer array

#include<stdio.h>

int getfloor(int arr[],int n, int x)
{
    int low=0,high=n-1,mid;
   int floor=-1;

  if(x==0) //base case
    return floor=0;

   while(low<=high)
   {
       mid=(low+high)/2;

       if(x > arr[mid]) //if greater
        {
       floor = arr[mid]; //move to right
        low = mid + 1;
       }

       else if(arr[mid]==x) //mid equal
        {
            return arr[mid]; //mid is floor
        }

       else  //if smaller
       {
        high = mid - 1; //move to left
       }
   }
   return floor;

}

int main()
{
    int arr[]={1,3,7};
    int n= sizeof(arr)/sizeof(arr[0]);

    //numbers from 0 to 10
    for(int i=0; i<=10; i++)
    {
        int f=getfloor(arr ,n, i);
     printf("Floor of %d  is %d\n", i,f);
    }
}
