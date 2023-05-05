#include<iostream>
#include<vector>
using namespace std ;

// merge sort 
// Time Complexity : o((n)*(log(n)))
// Not in place Sorting Algorithm,need auxilary space ->Space Complexity : o(n)

void merge(vector<int>&a ,int low,int mid ,int high)
{
     int i=low ,j=mid+1 ;
     int k=low ;
     int temp[a.size()];
     while(i<=mid && j<=high)
     {
         if(a[i]<a[j])
         {
            temp[k]=a[i];
            k++;
            i++;
         }
         else
         {
            temp[k]=a[j];
            k++;
            j++;
         }
     }
     while(i<=mid)
     {
           temp[k]=a[i];
            k++;
            i++;
     }
     while(j<=high)
     {
           temp[k]=a[j];
            k++;
            j++;
     }
     for(int s=low ;s<=(high);s++)
     {
          a[s]=temp[s];
     }
}
void mergeSort(vector<int>&a ,int low ,int high)
{
     int mid = low+(high-low)/2 ;
      if(low<high){//recursive call 
          mergeSort(a ,low,mid);
          mergeSort(a ,mid+1,high);
          merge(a,low,mid,high);
      }
}

void print(vector<int>arr,int size)
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
     vector<int>arr(size);
     for(int i=0 ;i<size ;i++)
     {
          cin>>arr[i];
     }
     mergeSort(arr,0,size-1);
     print(arr,size);
}


