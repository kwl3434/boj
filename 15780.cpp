#include<cstdio>
int main(){
    int N,K;
    int A;
    scanf("%d %d",&N,&K);
    while(K--){
        scanf("%d",&A);
        if(A%2==1){
            N-=A/2+1;
        }else{
            N-=A/2;
        }
        if(N<=0){
            printf("YES\n");return 0;
        }
    }
    printf("NO\n");
    return 0;
}