#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char cmd[13];
    int N;
    int stack[1000];
    int X,top=-1;
    scanf("%d",&N);
    while(N--){
        scanf("%s",cmd);
        if(!strcmp("push",cmd)){
            scanf("%d",&X);
            stack[++top]=X;
        }
        if(!strcmp("pop",cmd)){
            if(top!=-1){
                printf("%d\n",stack[top]);
                top--;
            }else{
                printf("%d\n",top);
            }
        }
        if(!strcmp("size",cmd)){
            printf("%d\n",top+1);
        }
        if(!strcmp("empty",cmd)){
            if(top==-1)printf("1\n");
            else printf("0\n");
        }
        if(!strcmp("top",cmd)){
            if(top==-1){printf("-1\n");
            }else printf("%d\n",stack[top]);
        }
    }
    return 0;
}