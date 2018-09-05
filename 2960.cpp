#include<cstdio>
int N,K,ans;
bool a[1001];
int main(){
        scanf("%d %d",&N,&K);
        for(int i=2;i<=N;i++){
                if(a[i])continue;
                for(int j=i;j<=N;j+=i){
                        if(!a[j]){
                                a[j]=true;
                                ans++;
                                if(ans==K){
                                        printf("%d\n",j);
                                        return 0;
                                }
                        }
                }
        }
}