#include<stdio.h>
int n[46];
int fibo(int i){
    if(i==0) return 0;
    if(i==1) return 1;
    if(n[i-2]>0 && n[i-1]>0) return n[i]=n[i-1]+n[i-2];
    return n[i]=fibo(i-1)+fibo(i-2);
}
int main(){
    int N;
    scanf("%d",&N);
    n[1]=1;
    n[N]=fibo(N);
    printf("%d\n",n[N]);
}