#include<iostream>
using namespace std;
int N,M,C;
bool arr[101][101];
bool check[101];
void DFS(int i){
        check[i]=true;
        for(int j=1;j<=N;j++){
                if(arr[i][j]&&!check[j]){C++;DFS(j);}
        }
}
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        cin>>N>>M;
        while(M--){
                int a,b;
                cin>>a>>b;
                arr[a][b]=arr[b][a]=true;
        }
        DFS(1);
        cout<<C<<'\n';
}
