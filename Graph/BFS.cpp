#include<bits/stdc++.h>
using namespace std ;
const int n=1e5+5 ;
bool vist[n];
vector<int>adj[n];


int main()
{
    freopen("input.txt" ,"r",stdin);
    freopen("output.txt" ,"w",stdout);
    int vertex,edges ;
    cin>>vertex>>edges ;

    for(int i=0 ; i<vertex ;i++)
    {
        vist[i]=0 ;
    }
    int source,dest ;
    for(int i=0 ;i<edges ;i++)
    {
        cin>>source>>dest ;
        adj[source].push_back(dest);
        adj[dest].push_back(source);
    }
    queue<int>bq ;
    bq.push(1);
    vist[1]=true ;
    while (!bq.empty())
    {
        int node = bq.front();
        bq.pop();
        cout<<node<<" ";
        vector<int>::iterator itr ;
        for(itr=adj[node].begin() ;itr != adj[node].end();itr++){
            if(!vist[*itr]){
                vist[*itr]=1;
                bq.push(*itr);
            }
        }
    }
    
}
