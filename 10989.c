#include<stdio.h>
int n,Index;
int arr[10001];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&Index);
        arr[Index]++;
    }
    for(int i=1;i<=10000;i++){
        for(int j=0;j<arr[i];j++){
            printf("%d\n",i);
        }
    }
    return 0;
}