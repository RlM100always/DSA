#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int binary_Search(int arr[],int searching_value,int size)
{
    //binary Search Algorithm
    //Time Complexity->o(log(n))
     int low = 0 ;
     int high = size-1 ,mid ;
 
     while(low<=high){
          mid = (low+high)/2 ;
          if(arr[mid]==searching_value){
               return mid ;
          }
          else if(arr[mid]>searching_value){
                high=mid-1 ;
          }
          else low=mid+1 ;
     }
     return -1 ;

}

int main()
{
   // For taking input from file and showing output in file
   //freopen("input.txt","r" ,stdin);
   //freopen("output.txt","w",stdout);
   
   cout<<"Enter the size of the Array : ";
   int n ;
   cin>>n ;
   int arr[n];

   cout<<"Enter the array : ";
   for(int i=0 ;i<n ;i++){
       cin>>arr[i];//the array value must be in sorted order
   }
   cout<<"Enter the searching value : ";
   int searching_value;
   cin>>searching_value ;
  
   int index = binary_Search(arr,searching_value,n);
   if(index==-1){
      cout<<"Searching value doesnt exist in the array "<<endl;
   }else{
      cout<<"Index of Searching value : "<<index<<endl ;
   }

   return 0 ; 
}