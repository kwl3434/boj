#include<iostream>
#include<queue>
using namespace std;
bool check[100001];
int main(){
    int N,K;
    int MIN=999999;
    cin>>N>>K;
    queue<pair<int,int> > q;
    q.push(make_pair(N,0));
    check[N]=true;
    while(!q.empty()){
        int i=q.front().first;
        int n=q.front().second;
        check[i]=true;
        q.pop();
        if( MIN>n && i==K){
            MIN=n;
        }
        if(i+1<100001 && check[i+1]!=true){
            q.push(make_pair(i+1,n+1));
        }
        if(i-1>=0 && check[i-1]!=true){
            q.push(make_pair(i-1,n+1));
        }
        if(i*2<100001 && check[i*2]!=true){
            q.push(make_pair(i*2,n));
        }
        
    }
    cout<<MIN<<"\n";
    return 0;
}