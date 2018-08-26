#include<stdio.h>
int main(){
    int N,i,tmp,j;
    char A[50];
    char B[50];
    char C[50];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    for(i=0;i<N;i++){
        scanf("%d", &B[i]);
        C[i]=B[i];
    }
    for(i=0;i<N;i++){
        for(j=0;j<N-1;j++){
            if(C[i]>=C[j]){
                tmp=C[j];
                C[j]=C[i];
                C[i]=tmp;
            }
            if(A[i]<=A[j]){
                tmp=A[j];
                A[j]=A[i];
                A[i]=tmp;
            }
        }
    }
    j=0;
    for(i=0;i<N;i++){
        j+=A[i]*C[i];
    }
    printf("%d\n",j);
    return 0;
}