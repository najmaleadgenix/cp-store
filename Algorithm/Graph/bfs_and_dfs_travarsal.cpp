// bfs
#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000];
bool vis[1000];
int level[1000];
int parent[1000];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
       
        // cout<<par<<" ";
        for(auto child : adj_list[par])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
                level[child]=level[par]+1;
                parent[child]=par;
            }
        }
    }
}
int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b ; cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected 
    }
    int src,des; cin>>src>>des;
    memset(vis,false,sizeof(vis));
    memset(level,-1, sizeof(level));
    bfs(src);

    // is visited
    if(vis[des]==true) cout<<"YES";

    // single source shortest distance
    // for(int i=0; i<n; i++)
    // cout<<i<<"->"<<level[i]<<endl;
    cout<<level[des];

    //path printing
    vector<int>path;
    int node=des;
    while(node!=-1)
    {
        path.push_back(node);
        node=parent[node];
    }
    reverse(path.begin(),path.end());
    for(auto x:path)
    cout<<x<<" ";
    return 0;
}

//dfs
#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1000];
bool vis[1000];
void dfs(int src)
{
    // cout<<src<<" ";
    vis[src]=true;
    for(auto child:adj_list[src])
    {
        if(vis[child]==false)
        {
            dfs(child);
        }
    }
}
int main()
{
    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); //for undirected
    }
    memset(vis,false,sizeof(vis));
    int src; cin>>src;
    dfs(src);
    return 0;
}