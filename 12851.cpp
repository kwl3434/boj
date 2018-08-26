#include<iostream>
#include<queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,K;
    bool checka[100001]={0,};
    int C=0;
    int MIN=0;
    cin>>N>>K;
    queue<pair<int,int> > q;
    q.push(make_pair(N,0));
    checka[N]=true;
    while(!q.empty()){
        int i=q.front().first;
        int n=q.front().second;
        checka[i]=true;
        q.pop();
        if(MIN && MIN==n && i==K){ 
            C++;
        }
        if(!MIN && i==K){
            MIN=n;
            C++;
        }
        if(i+1<100001 && !checka[i+1]){
            q.push(make_pair(i+1,n+1));
        }
        if(i-1>=0 && !checka[i-1]){
            q.push(make_pair(i-1,n+1));
        }
        if(i*2<100001 && !checka[i*2]){
            q.push(make_pair(i*2,n+1));
        }
    }
    cout<<MIN<<"\n";
    cout<<C<<"\n";
    return 0;
}