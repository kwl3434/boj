#include<stdio.h>
main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    
    if(A-B>=0){
        if(A-C<=0){
            printf("%d",A);
        }else if(B-C>=0){
            printf("%d",B);
        }else
            printf("%d",C);
    }else if(B-C<=0){
        printf("%d",B);
    }else if(A-C>=0){
        printf("%d",A);
    }else printf("%d",C);
}