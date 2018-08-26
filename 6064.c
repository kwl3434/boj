#include<stdio.h>
int gdb(int m, int n){
    int a,b,c;
    a=m,b=n;
    while(1)
    {
        c=a%b;
        if(c==0)break;
        a=b,b=c;
    }
    return (m*n)/b;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int M,N,x,y,L;
        scanf("%d %d %d %d",&M,&N,&x,&y);
        L=gdb(M,N);
        while(x!=y&&x<=L){
            if(x<y) x+=M;
            else y+=N;
        }
        if(x!=y) printf("-1\n");
        else printf("%d\n",x);
    }
    return 0;
}