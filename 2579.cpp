#include<iostream>
#include<algorithm>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int dp[301][3];
    int a[301];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    dp[1][1]=a[1];
    dp[1][2]=a[1];
    for(int i=2;i<=n;i++){
        dp[i][1]=dp[i-1][2]+a[i];
        dp[i][2]=max(dp[i-2][1],dp[i-2][2])+a[i];
    }
    cout<<max(dp[n][2],dp[n][1])<<'\n';
    return 0;
}