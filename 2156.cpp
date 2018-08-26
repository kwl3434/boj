#include<iostream>
#include<algorithm>

using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int dp[10001][3];
    int a[10001];
    cin >> n;
    for(int i=1;i<=n;i++) cin>>a[i];
    dp[1][1]=a[1];
    dp[1][2]=a[1];
    for(int i=2;i<=n;i++){
        dp[i][1]=max(dp[i-2][2]+a[i],dp[i-1][2]);
        dp[i][2]=max(dp[i-1][1]+a[i],dp[i-1][2]);
    }
    cout<<max(dp[n-1][1],dp[n][2])<<'\n';
    return 0;
}