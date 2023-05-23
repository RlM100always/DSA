#include <bits/stdc++.h>
using namespace std;

int parent[5];

void make(int v) {

  parent[v] = v;
}

int find(int v) {
  if (v == parent[v]) // time complexity O(N)
    return v;
  return find(parent[v]);
}

int find_pathcompression(int v) {
  if (v == parent[v]) // time complexity O(logN)
    return v;
  return parent[v] = find_pathcompression(parent[v]);
}

void Union(int a, int b) {
  int a1 = find(a);
  int a2 = find(b);
  if (a1 != a2) {
    parent[a2] = a1;
  }
}

int main() {

  freopen("input.txt" ,"r",stdin);
  freopen("output.txt" ,"w",stdout);
  vector<int> v;
  // cout<<v[0]<<endl;

  for (int i = 1; i <= 4; i++) {
    // int x;
    // cin >> x;
    make(i);
  }

  //  make(v);

  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;


  Union(1, 2);
  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;

  Union(3, 4);
  
  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;
  

   Union(2, 4);
  cout << parent[1] <<" ";
  cout << parent[2] <<" ";
  cout << parent[3] <<" ";
  cout << parent[4] <<" ";
  cout<<endl;

  return 0 ;
}