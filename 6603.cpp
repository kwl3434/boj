#include<cstdio>
int l=6,c;
int a[13];
int check[13];
int main(){
	while(scanf("%d",&c)){
		if(c==0)break;
		for(int i=0;i<c;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<l;i++){
			check[i]=i;
		}
		while(check[0]<=c-l){
			for(int i=0;i<l;i++){
				printf("%d ",a[check[i]]);
			}
			printf("\n");
			if(check[0]==c-l) break;
			for(int i=l-1;i>=0;i--){
				if(check[i]!=c-l+i){
					check[i]++;
					if(i!=l-1){
						for(int j=i;j<=l-1;j++){
							check[j+1]=check[j]+1;
						}
					}
					break;
				}
			}
		}
		printf("\n");
	}
}