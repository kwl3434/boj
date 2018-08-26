#include<stdio.h>
int n[100001];
int u[100001];
int MAX=-2147483648;
int main(){
    register int i;
    int N;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&n[i]);
        u[i]=n[i];
        if(MAX<n[i]) MAX=n[i];
    }
    u[0]=n[0];
    for(i=1;i<N;i++){
        if(u[i-1]+n[i]>n[i]){
            u[i]=u[i-1]+n[i];
        }else u[i]=n[i];
        if(MAX<u[i])MAX=u[i];
    }
    printf("%d\n",MAX);
}