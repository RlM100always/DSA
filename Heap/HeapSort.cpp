#include <bits/stdc++.h>
using namespace std;


  void maxheapify(int arr[],int size,int i){//o(n)
    int large=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    while(l<size && arr[large]<arr[l]){
        large=l;
    }
     while(r<size && arr[large]<arr[r]){
        large=r;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        maxheapify(arr, size, large);
    }
  }

  void minheapify(int arr[],int size,int i){
    int large=i;
    int l=(2*i)+1;
    int r=l+1;
    while(l<size && arr[large]>arr[l]){
        large=l;
    }
     while(r<size && arr[large]>arr[r]){
        large=r;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        minheapify(arr, size, large);
    }
  }


int main() {


  freopen("input.txt" ,"r",stdin);
  freopen("output.txt" ,"w",stdout);

  int siz ;
  //cout<<"Enter array size : ";
  cin>>siz ;
  int arr[siz+2];
  //cout<<"Enter the array : ";
  for(int i=0 ;i<siz ;i++){
        cin>>arr[i];
  }

  for(int i=(siz/2)-1;i>=0;i--){
    maxheapify(arr, siz, i);           
  }      
  
  for(int i=0;i<siz;i++){
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  for(int i=siz-1;i>=0;i--){
    swap(arr[i],arr[0]);
   // cout<<"i = "<<i<<endl;
    maxheapify(arr, i, 0);    
  }
  
  for(int i=0;i<siz;i++){
      cout<<arr[i]<<" ";
  }
   cout<<endl;


   for(int i=(siz/2)-1;i>=0;i--){
      minheapify(arr, siz, i);                
   }

   for(int i=0;i<siz;i++){
       cout<<arr[i]<<" ";
   }
  cout<<endl;
  for(int i=siz-1;i>=0;i--){
    swap(arr[i],arr[0]);
   // cout<<"i = "<<i<<endl;
    minheapify(arr, i, 0);    
  }
 
  for(int i=0;i<siz;i++){
      cout<<arr[i]<<" ";
  }
   cout<<endl;

  return 0;
}