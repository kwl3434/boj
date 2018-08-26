#include<cstdio>
#include<iostream>
using namespace std;
long long N,k,ans;
int main(){
    scanf("%lld%lld",&N,&k);
	long long L=1;
	long long R=N*N;

	while(L<=R){
		long long mid=(L+R)/2;
		long long cnt=0;
		for( int i=1; i<=N; i++){
			long long num=mid/i;
			if(num>N){
				num =N;
			}
			cnt+=num;
		}
		if(cnt>=k){
			ans=mid;
			R=mid-1;
		}else if(cnt<k){
			L=mid+1;
		}
	}
	printf("%lld\n",ans);
	return 0;
}