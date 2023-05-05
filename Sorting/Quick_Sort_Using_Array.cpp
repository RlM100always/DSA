#include<iostream>
#include<vector>
using namespace std ;
//worst case->o(n^n)
//avarage case ->o(n*log(n))

int partition(int arr[],int l,int h)
{
   int pivot=arr[l];
   int i=l,j=h ;
   while(i<j)
   {
      while(arr[i]<=pivot)i++ ;
      while(arr[j]>pivot)j--;
      if(i<j)swap(arr[i],arr[j]);
   }
   swap(arr[l],arr[j]);
   return j ;

}
void quickSort(int arr[],int l,int h)
{
   if(l<h)
   {
      int pi = partition(arr,l,h);
      quickSort(arr,l,pi-1);
      quickSort(arr,pi+1,h);
   }
}

void print(int arr[],int size)
{
   cout<<"After Sorting : " ;
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
     quickSort(arr,0,size-1);
     print(arr,size);
     
     return 0 ;
}


