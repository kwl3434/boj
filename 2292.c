#include<stdio.h>
int main(){
    int n,i,k=0,count=0;
    scanf("%d",&n);
    for(i=1;n>0;i=6*k){
        n-=i;count++;k++;
    }
    printf("%d",count);
    return 0;
}