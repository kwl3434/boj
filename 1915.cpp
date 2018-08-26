#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,M,H;
char a[1001][1001];
char c[1001];
int b[1001][1001];
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%s",c);
        for(int j=1;j<=m;j++){
            M=0;
            a[i][j]=c[j-1];
            if(a[i][j]>48){
                M=min(b[i-1][j-1],b[i-1][j]);
                M=min(b[i][j-1],M);
                b[i][j]=M+1;
                H=max(b[i][j],H);
            }
        }
    }
    cout<<H*H<<'\n';
}