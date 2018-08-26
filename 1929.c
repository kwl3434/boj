#include<stdio.h>
int main(){
    int i,j,m,n;
    char a[1000001] ={0,1};
    scanf("%d %d", &m,&n);
    for(i=2;i<=n;i++){
        for(j=2;i*j<=n;j++){
            a[i*j]=1;
        }
    }
    for(i=m; i<=n;i++){
        if(!a[i])printf("%d\n",i);
    }
    return 0;
}