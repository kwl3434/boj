#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<tuple>
using namespace std;
int b[20001];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    queue<int> q;
    vector<vector<pair<int,int> > > ed;
    int V,E,K,u,v,w;
    cin>>V>>E>>K;
    ed.resize(V+1);
    for(int i=1;i<=E;i++){
       cin>>u>>v>>w;
       ed[u].push_back(make_pair(v,w));
    }
    q.push(K);
    while(!q.empty()){
        for(vector<pair<int,int> >::iterator i=ed[q.front()].begin();i!=ed[q.front()].end();i++){
            tie(u,v)=*i;
            if(!b[u]){ b[u]=b[q.front()]+v;q.push(u);}
            else if(b[u]>(b[q.front()]+v)){
                b[u]=b[q.front()]+v;
                q.push(u);
            }
        }
        q.pop();
    }
    for(int i=1;i<=V;i++){
        if(i==K) cout<<0<<'\n';
        else if(!b[i])cout<<"INF"<<'\n';
        else cout<<b[i]<<'\n';
    }
}