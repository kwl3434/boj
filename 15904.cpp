#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main(){
    char s[1001];
    char check[4]={0,};
    cin.getline(s,1000);
    for(int i=0;strlen(s)>i;i++){
        if(s[i]=='U') check[0]++;
        if(check[0]>=1&&s[i]=='C') check[1]++;
        if(check[0]>=1&&check[1]>=1&&s[i]=='P') check[2]++;
        if(check[0]>=1&&check[1]>=2&&check[2]>=1&&s[i]=='C') check[3]++;
    }
    if(check[0]>=1&&check[1]>=2&&check[2]>=1&&check[3]>=1) printf("I love UCPC");
    else printf("I hate UCPC");
    return 0;
}