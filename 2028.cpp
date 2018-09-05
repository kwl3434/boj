#include<cstdio>
#include<stdlib.h>
#include<cstring>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char n[10],a[10];
		int N;
		bool check=1;
		scanf("%s",n);
		N=atoi(n);
		N=N*N;
		snprintf(a,10,"%d",N);
		for(int i=0;i<strlen(n);i++){
			if(a[strlen(a)-strlen(n)+i]!=n[i]){check=0;} 
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
}
