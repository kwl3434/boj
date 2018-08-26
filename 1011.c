#include<stdio.h>
int main(){
    int t,x,y,n,count=0;
    scanf("%d",&t);
   while(t--){
        scanf("%d %d",&x,&y);
        n=y-x;
        x=2,y=2;
        if(n==1){
            printf("1\n");
            continue;
        }else if(n==2){
            printf("2\n");
            continue;
        }
        n-=2;
        while(n>0){
            if(count==2){y++;count=0;}
            count++;
            n-=y;
            x++;
        }
        printf("%d\n",x);
        count=0;
    }
    return 0;
}