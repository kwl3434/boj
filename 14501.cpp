#include<cstdio>
int N,ans;
int T[16][2];
int dp[16];
int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d",&T[i][0],&T[i][1]);
	}
	for(int i=N-1;i>=0;i--){
		if(dp[i]==0)dp[i]=dp[i+1];
		if(i+(T[i][0])>N)
			continue;
		dp[i]=dp[i+T[i][0]]+T[i][1]>dp[i]?dp[i+T[i][0]]+T[i][1]:dp[i];
		ans=ans>dp[i]?ans:dp[i];
	}
	printf("%d\n",ans);
}