#include<cstdio>
int a[1000];
int dp(int i){
    if(i==0) return 1;
    if(i==1) return 2;
    if(a[i-2]>0&&a[i-1]>0) return a[i]=(a[i-2]+a[i-1])%10007;
    return a[i]=(dp(i-1)+dp(i-2))%10007;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",dp(n-1));
    return 0;
}