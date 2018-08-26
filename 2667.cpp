#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char arr[27][27];
bool check[27][27];
int N,g;
int C[315];
void DFS(int a,int b){
        check[a][b]=true;
        C[g]++;
        if(b+1<N){
                if(arr[a][b+1]=='1'&&!check[a][b+1]) DFS(a,b+1);
        }
        if(b-1>=0){
                if(arr[a][b-1]=='1'&&!check[a][b-1]) DFS(a,b-1);
        }
        if(a+1<N){
                if(arr[a+1][b]=='1'&&!check[a+1][b]) DFS(a+1,b);
        }
        if(a-1>=0){
                if(arr[a-1][b]=='1'&&!check[a-1][b]) DFS(a-1,b);
        }
}
int main(){
        cin>>N;
        for(int i=0;i<N;i++){
                scanf("%s",arr[i]);
        }
        g=0;
        for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                        if(arr[i][j]=='1'&&!check[i][j]){
                                g++;
                                DFS(i,j);
                        }
                }
        }
        sort(C+1,C+g+1);
        cout<<g<<'\n';
        for(int i=1;i<=g;i++){
                cout<<C[i]<<'\n';
        }
}
