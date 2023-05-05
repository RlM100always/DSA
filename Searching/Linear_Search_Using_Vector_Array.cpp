#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


void liner_Search_Using_Vector(){
   
   cout<<"Enter the size of the Array : ";
   int n ;cin>>n ;
   vector<int>v(n);
   cout<<"Enter the vector: ";
   for(int i=0 ;i<n ;i++){
       cin>>v[i];//the array value must be in sorted order
   }

   /*
      Another way to take user Input for vector :
      int n ;cin>>n ;
      vector<int>v;
      for(int i=0 ;i<n ;i++){
         int value ;cin>>value ;
         v.push_back(value);
      }
   
   */
   cout<<"Enter the searching value : ";
   int searching_value;
   cin>>searching_value ;
   int count =0 ;
   for(int i=0 ;i<n ;i++){
      if(v[i]==searching_value){
          count++ ;
          cout<<"Searching index = "<<i<<endl ;
          break ;
      }
   }
   if(count == 0)cout<<"Searching index not found "<<endl ;
}

void liner_Search_Using_Array(){
  
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
   int count =0 ;
   for(int i=0 ;i<n ;i++){
      if(arr[i]==searching_value){
          count++ ;
          cout<<"Searching index = "<<i<<endl ;
          break ;
      }
   }
   if(count == 0)cout<<"Searching index not found "<<endl ;
}

int main(){
    
   // For taking input from file and showing output in file
   //freopen("input.txt","r" ,stdin);
   //freopen("output.txt","w",stdout);

    liner_Search_Using_Array();
    liner_Search_Using_Vector();

    return 0 ;
}
