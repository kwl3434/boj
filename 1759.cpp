#include<cstdio>
#include<algorithm>
using namespace std;
int l,c,p,o;
char a[15];
int check[15];
int main(){
	scanf("%d %d",&l,&c);
	for(int i=0;i<c;i++){
		scanf("%s",&a[i]);
	}
	sort(a,a+c);
	for(int i=0;i<l;i++){
		check[i]=i;
	}
	while(check[0]<=c-l){
		p=o=0;
		for(int i=0;i<l;i++){
			if('a'==a[check[i]]||'e'==a[check[i]]||'i'==a[check[i]]||'o'==a[check[i]]||'u'==a[check[i]]) p++;
			else o++;
		}
		if(p>=1&&o>=2){
			for(int i=0;i<l;i++){
				printf("%c",a[check[i]]);
			}
			printf("\n");
			if(check[0]==c-l) break;
		}else if(check[0]==c-l) break;
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
}