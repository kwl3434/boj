#include <stdio.h>
int main(){
    int n,i,j=1;
    scanf("%d",&n);
    for(i=1;n>i;i++){
        if(n==1){
            printf("1/%d",i);
            return 0;
        }
        n-=i;
    }
    if((i%2)==0){
        n--;
        while(n!=0){
            i--;j++;n--;
        }
        printf("%d/%d",j,i);
    }else {
        n=i-n;
        while(n!=0){
            i--;j++;n--;
        }
        printf("%d/%d",j,i);
    }
    return 0;
}