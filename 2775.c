#include<stdio.h>
int N[15][15]={0,};
int rec(int a, int b){
    if(a==0||b==1||b==2) return N[a][b];
    if(N[a][b]>0) return N[a][b];
    else return N[a][b]=rec(a-1,b)+rec(a,b-1);
}
int main(){
    int T,k,n,i;
    for(i=1;i<15;i++){N[0][i]=i,N[i][1]=1,N[i][2]=i+2;}
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&k,&n);
        printf("%d\n",rec(k,n));
    }
    return 0;
}