#include<iostream>
#include<vector>
#define vi vector<int> 
using namespace std ;

//Selection Sort 
//TC==o(n*n)
void selectionSort(vector<int>&a ,int size)
{
     for(int i=0 ;i<=(size-1);i++)
     {
          int min_index = i ;
          for(int j=i+1 ;j<=(size-1);j++)
          {
               if(a[j]<a[min_index])
               {
                    min_index=j ;
               }
          }
          //swap i && update min_index value
          int temp ;
          temp =a[i];
          a[i]=a[min_index];
          a[min_index]=temp ;
     }
}

void print(vi &arr,int size)
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
     vi arr(size);
     for(int i=0 ;i<size ;i++)
     {
          cin>>arr[i];
     }
     selectionSort(arr,size);
     print(arr,size);
    
     return 0 ;
}


