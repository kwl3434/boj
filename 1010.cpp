#include<cstdio>
int N,M,T;
long long a[31][31];
int main(){
	scanf("%d",&T);
	for(int i=1;i<31;i++){
		a[i][i]=1;
		a[1][i]=i;
	}
	for(int i=2;i<31;i++){
		for(int j=i+1;j<31;j++){
			a[i][j]=a[i-1][j-1]+a[i][j-1];
		}
	}
	while(T--){
		scanf("%d %d",&N,&M);
		printf("%lld\n",a[N][M]);
	}
}