#include<cstdio>
int N,ji,im;
int main(){
	scanf("%d %d %d",&N,&ji,&im);
	int c=18;
	ji--,im--;
	int two=2;
	int ans=0;
	while(c--){
		ans++;
		if(ji/two==im/two) break;
		two*=2;
	}
	printf("%d\n",ans);
}