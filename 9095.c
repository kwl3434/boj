#include <stdio.h>
int arr[11];
int N;
int A;
int T_DP(int n){
    if(n<=0)return 0;
    else if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }else if(n==3){
        return 4;
    }else{
        if(arr[n]!=0) return arr[n];
        else{
            arr[n]=T_DP(n-1)+T_DP(n-2)+T_DP(n-3);
            return arr[n];
        }
    }
}
int main(){
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d",&N);
        A=T_DP(N);
        printf("%d\n",A);
    }
    return 0;
}