#include<iostream>
#include<vector>
#define vi vector<int> 
using namespace std ;

//insertion sort 
//o((n)*(n))
void insertionSort(vi &a,int size){
     for(int i=1 ;i<=(size-1);i++){
        int j= i-1 ;
        int hole = a[i];
        while(j>=0 && a[j]>hole){
            //if ture this condition 
            //shift the a[j] value
            a[j+1]=a[j];
            j-- ;
        }
        a[j+1]=hole ;
     }
}

void print(vi &arr,int size)
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
     vi arr(size);
     for(int i=0 ;i<size ;i++)
     {
          cin>>arr[i];
     }
     insertionSort(arr,size);
     print(arr,size);
     
     return 0 ;
}


