#include<bits/stdc++.h>
using namespace std ;
const int n=1e5+2 ;
bool vis[n];
vector<int>adj[n];

void dfs(int node)
{
    //preorder
     vis[node]=1 ;
     cout<<node<<" ";
     

     //inoerder
     vector<int>:: iterator it ;
     for(it=adj[node].begin();it != adj[node].end();it++){
        if(!vis[*it]){
            dfs(*it);//recursive call 
        }
     }
}

int main()
{
    freopen("input.txt" ,"r",stdin);
    freopen("output.txt" ,"w",stdout);
    int vertex,edges ;
    cin>>vertex>>edges ;

    for(int i=0 ; i<vertex ;i++)
    {
        vis[i]=0 ;
    }
    int source,dest ;
    for(int i=0 ;i<edges ;i++)
    {
        cin>>source>>dest ;
        adj[source].push_back(dest);
        adj[dest].push_back(source);
    }
    dfs(0);

}
