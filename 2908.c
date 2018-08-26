#include<stdio.h>
int main(){
    char str[3];
    char str1[3];
    scanf("%s %s",str,str1);
    if(((str[0]-48)+(str[1]-48)*10+(str[2]-48)*100)>((str1[0]-48)+(str1[1]-48)*10+(str1[2]-48)*100)){
        printf("%d\n",((str[0]-48)+(str[1]-48)*10+(str[2]-48)*100));
    }else{
        printf("%d\n",((str1[0]-48)+(str1[1]-48)*10+(str1[2]-48)*100));
    }
}