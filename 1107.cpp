#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
int m,ans,MIN=99999999;
bool check;
char n[6],buf[7];
bool num[10];
int main(){
	scanf("%s %d",&n,&m);
	while(m--){
		int k;
		scanf("%d",&k);
		num[k]=true;
	}
	int ch=100;
	ans=abs(atoi(n)-ch);
	MIN=MIN<ans?MIN:ans;
	for(int i=0;i<atoi(n)+390000;i++){
		sprintf(buf,"%d",i);
		check=false;
		ans=0;
		for(int j=0;j<strlen(buf);j++){
			if(num[buf[j]-48]) {check=true;break;}
		}
		if(check) continue;
		ans+=strlen(buf);
		ans+=abs(atoi(n)-i);
		MIN=MIN<ans?MIN:ans;
	}
	printf("%d\n",MIN);
}