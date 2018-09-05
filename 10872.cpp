#include<cstdio>
int N,M=1;
int main(){
        scanf("%d",&N);
        for(int i=1;i<=N;i++){
                M*=i;
        }
        if(N)printf("%d\n",M);
        else printf("1\n");
}
