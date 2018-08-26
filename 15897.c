#include<stdio.h>
int main(){
    int n;
    int i;
    long long int count=0;
    int jump=0;
    scanf("%d",&n);
    for(i=1;i<=n;i+=jump){
        if(((n-1)/i)==0){jump=1;}
        else jump=((n-1)%i) / ((n-1)/i)+1;
        count+=(1+(n-1)/i)*jump;
    }
    printf("%lld\n",count);
    return 0;
}