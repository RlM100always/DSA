#include<bits/stdc++.h>
using namespace std ;



//Bubble sort 
//o(n*n)
void bubbleSort(vector<int>&a ,int size){
     for(int i=0 ;i<=(size-1-i);i++){
          for(int j=0 ;j<=(size-2);j++){
               if(a[j]>a[j+1])
                 swap(a[j],a[j+1]);
          }
     }
}


int main()
{
   vector<int>v1={0,-9,-789,-50,61,-47,-18};
   int size = v1.size();
   bubbleSort(v1,size);
   cout<<"After Sorting : "<<endl;
   for(int i=0 ;i<size ;i++){
         cout<<v1[i]<<" ";
   }
   
   cout<<endl;
}

