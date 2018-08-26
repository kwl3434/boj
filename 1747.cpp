#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;

int main(){
    int n,check=0;
    char s[9];
    scanf("%d",&n);
    int *arr=new int[1003002];
    for(int i=2;i<=1003001;i++){
        arr[i]=i;
    }
    for(int i=2;i<=1003001;i++){
         if(arr[i]==0)continue;
        for(int j=i+i;j<=1003001;j+=i){
            arr[j]=0;
        }
    }
    if(n<10){
        int j=n;
        while(arr[j]==0)j++;
        printf("%d\n",j);
        return 0;
    }
    for(int i=n;;i++){
        if(arr[i]==0) continue;
        sprintf(s,"%d",i);
        if(strlen(s)%2==0){
            int j=strlen(s)-1;
            while(j>=strlen(s)/2){
                if(s[j]==s[strlen(s)-1-j]){
                    check++;
                }else break;
                j--;
                if(check==(strlen(s)/2)){printf("%s\n",s);return 0;}
            }
        }else{
            int j=strlen(s)-1;
            while(j>strlen(s)/2){
                if(s[j]==s[strlen(s)-1-j]){
                    check++;
                }else break;
                j--;
                if(check==(strlen(s)/2)){printf("%s\n",s);return 0;}
            }
        }
        check=0;
    }
    return 0;
}