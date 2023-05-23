#include<bits/stdc++.h>
using namespace std ;

int adj[100][100];

int main()
{
    freopen("input.txt" ,"r",stdin);
    freopen("output.txt" ,"w",stdout);
    int node,edge ;
    //cout<<"Enter the number of nodes : ";
    cin>>node ;
    //cout<<"Enter the number of edge : ";
    cin>>edge ;
 
    int a1,a2 ;
    for(int i=0 ;i<edge ;i++)
    {
        cin>>a1>>a2 ;
        adj[a1][a2]=1;
        adj[a2][a1]=1;
    }
    for(int i=0 ;i<node ;i++)
    {
        for(int j=0 ;j<node ;j++)
        {
            cout<<adj[i][j]<<"  ";
        }
        cout<<endl ;
    }

}