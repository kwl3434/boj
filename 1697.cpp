#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
bool check[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<pair<int,int> > q;
    int N,K,i;
    cin>>N>>K;
    q.push(make_pair(N,0));
    pair<int,int> n=q.front();
    if(N>K) { cout<<N-K<<'\n';return 0;}
    while(n.first!=K){
        n=q.front();
        i=n.first;
        check[i]=true;
        if(i*2<=100000&&check[i*2]!=true){
            q.push(make_pair(i*2,n.second+1));
        }
        if(i+1<=100000&&check[i+1]!=true){
            q.push(make_pair(i+1,n.second+1));
        }
        if(i-1>0&&check[i-1]!=true){
            q.push(make_pair(i-1,n.second+1));
        }
        q.pop();
    }
    cout<<n.second<<'\n';
    return 0;
}