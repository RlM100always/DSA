#include<iostream>
#include <vector>
using namespace std ;
/*
   ->It is a on comparison based sorting Algorithom .
   ->Liner Time complexity : o(n+k) n=size of array k=max Value of the array
   ->Space Complexity : o(n+k)
   Note : (Only for positive integer (input) this code will be run)
*/

int getMax(int arr[],int siz){
    int maxValue = arr[0];
    for(int i=0 ;i<siz ;i++)
    {
        if(arr[i]>maxValue)
        {
            maxValue=arr[i];
        }
    }
    return maxValue ;
}

void countSort(int arr[],int siz)

{
    int out[siz];
    int max = getMax(arr,siz)+1 ;
    int cnt[max];
    for(int i=0;i<max ;i++)
    {
        cnt[i]=0;
    }
    for(int i=0 ;i<siz ;i++)
    {
        cnt[arr[i]]++ ;
    }
    for(int i=1 ;i<max ;i++)
    {
        cnt[i]=cnt[i]+cnt[i-1];
    }
    for(int i=siz-1 ;i>=0 ;i--)
    {
        out[--cnt[arr[i]]]=arr[i];
    }
   //copy output array value to the main array
   for(int i=0 ;i<siz ;i++)
   {
        arr[i]=out[i];
   }

}


void print(int arr[],int size)
{
   cout<<"After Sorting : "<<endl ;
   for(int i=0 ;i<size;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl ;
}

int main()
{
     cout<<"Enter the size of the Array : ";
     int size ;cin>>size ;
     cout<<"Now Enter the Array : ";
     int arr[size];
     for(int i=0 ;i<size ;i++)
     {
          cin>>arr[i];
     }
     countSort(arr,size);
     print(arr,size);
     
     return 0 ;
}


