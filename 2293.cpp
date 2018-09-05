#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,k;
int v[100];
int dp[10001];
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        cin>>n>>k;
        for(int i=0;i<n;i++){
                cin>>v[i];
        }
        sort(v,v+n);
        for(int i=0;v[0]*i<=k;i++){
                dp[v[0]*i]=1;
        }
        for(int i=1;i<n;i++){
                for(int j=1;j<=k;j++){
                        if(j-v[i]>=0) dp[j]+=dp[j-v[i]];
                }
        }
        cout<<dp[k]<<'\n';
}
