#include<iostream>
#define min(a,b) a=a>b?b:a;
#define max(a,b) a=a>b?a:b;
using namespace std;
int N,MIN=10000000,MAX=-10000000;
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        cin>>N;
        while(N--){
                int n;
                cin>>n;
                min(MIN,n);
                max(MAX,n);
        }
        cout<<MIN<<' '<<MAX<<'\n';
}
