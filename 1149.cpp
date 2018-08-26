#include<iostream>
#include<algorithm>
using namespace std;
int MIN=1000000000;
int r,g,b;
int q,w,e;
int a,s,d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        a=q;s=w;d=e;
        cin>>r>>g>>b;
        q=min(s,d)+r;
        w=min(a,d)+g;
        e=min(a,s)+b;
    }
    MIN=min(MIN,q);MIN=min(MIN,w);MIN=min(MIN,e);
    cout<<MIN<<'\n';
}