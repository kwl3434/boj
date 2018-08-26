#include<cstdio>
int main(){
	int K,N,M;
	scanf("%d %d %d",&K,&N,&M);
	if(M-K*N>=0) printf("0\n");
	else printf("%d\n",K*N-M);
}