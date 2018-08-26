#include<iostream>
using namespace std;
bool a[52][52];
bool check[52][52];
void DFS(int i, int j){
    if(a[i][j]&&!check[i][j]){
        check[i][j]=true;
        DFS(i+1,j);
        DFS(i-1,j);
        DFS(i,j+1);
        DFS(i,j-1);
    }
}
int main(){
    int T,M,N,K,x,y,c;
    cin>>T;
    while(T--){
        c=0;
        cin>>M>>N>>K;
        for(int i=1;i<=K;i++){
            cin>>x>>y;
            a[x+1][y+1]=true;
        }
        for(int i=1;i<=M;i++){
            for(int j=1;j<=N;j++){
                if(a[i][j]!=check[i][j]){
                    DFS(i,j);c++;
                }
            }
        }
        for(int i=1;i<=M;i++){
            for(int j=1;j<=N;j++){
                a[i][j]=false;
                check[i][j]=false;
            }
        }
        cout<<c<<'\n';
    }
}