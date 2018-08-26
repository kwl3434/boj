#include<stdio.h>
#include<string.h>
int main(){
    char num[11]={0,},count=0;
    int i;
    char P[8];
    scanf("%s",P);
    for(i=0;i<strlen(P);i++){
            num[P[i]-48]++;
    }
    num[10]=(num[6]+num[9]+1)/2;
    for(i=0;i<11;i++){
        if(i!=6 && i!=9){
            if(count<=num[i]){
                count=num[i];
            }
        }
    }
    printf("%d\n",count);
    return 0;
}