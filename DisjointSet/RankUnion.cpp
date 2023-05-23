#include <bits/stdc++.h>
using namespace std;

 vector<int>parent;

 vector<int>siz;

void make(int v) {
 
  parent[v] = v;
  siz[v]=1;
}

int find_pathcompression(int v) {
  if (v == parent[v]) 
    return v;
  return parent[v] = find_pathcompression(parent[v]);
}

void Union_rank(int a,int b){
     int a1 = find_pathcompression(a);
     int a2 = find_pathcompression(b);
     if (a1 != a2) {
        if(siz[a1]<siz[a2]){
            swap(a1,a2);
        }
        parent[a2]=a1;
        siz[a1]+=siz[a2];
     }
}


int main() {


    freopen("input.txt" ,"r",stdin);
    freopen("output.txt" ,"w",stdout);
    
  //vector<int> v;
  // cout<<v[0]<<endl;

   parent.resize(4);
   siz.resize(4);

  for (int i = 0; i <= 4; i++) {
    // int val ;
    // cin>>val ;
    make(i);
  }

  //  make(v);

  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;

  Union_rank(1, 2);
  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;

  Union_rank(3, 4);
  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;
  
  Union_rank(2, 4);
  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;
}