#include <bits/stdc++.h>
using namespace std ;

int getMax(int arr[],int siz){
    int max= arr[0];
    for(int i=0 ;i<siz ;i++){
         if(arr[i]>max){
          max =arr[i];
    }
    }
    return max ;
}

void countSort(int arr[],int siz,int pos)
{
    int out[siz];
    int cnt[10];
    for(int i=0;i<10 ;i++)
    {
         cnt[i]=0;
    }
    for(int i=0 ;i<siz ;i++)
    {
         cnt[(arr[i]/pos)%10]++ ;
    }
    for(int i=1 ;i<10 ;i++)
    {
         cnt[i]=cnt[i]+cnt[i-1];
    }
   for(int i=siz-1 ;i>=0 ;i--)
    {
         out[--cnt[(arr[i]/pos)%10]]=arr[i];
    }
   for(int i=0 ;i<siz ;i++)
    {
       arr[i]=out[i];
    }

}


void radixSort(int arr[],int siz)
{
    int max = getMax(arr,siz);
    for(int pos=1 ;(max/pos)>0 ;pos*=10 )
    {
         countSort(arr,siz,pos);        
    }
}   

void print(int arr[],int size)
{
   cout<<"After Sorting : ";
   for(int i=0 ;i<size;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl ;
}

int main() 
{
   cout<<"Enter the Size of the Arrray : ";
   int siz ;
   cin>>siz ;
   cout<<"Enter the array : ";
   int arr[siz];
   for(int i=0 ;i<siz ;i++)
   {
       cin>>arr[i];
   }
   radixSort(arr,siz);
   print(arr,siz);
  
   return 0;
}



