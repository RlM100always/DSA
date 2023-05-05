#include<iostream>
#include <vector>
using namespace std ;

//Bubble sort 
//o(n*n)
void bubbleSort(int *a,int size)
{
     for(int i=0 ;i<=(size-1-i);i++){
          for(int j=0 ;j<=(size-2);j++){
               if(a[j]>a[j+1])
               swap(a[j],a[j+1]);
          }
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
     bubbleSort(arr,size);
     print(arr,size);
     
     return 0 ;
}


