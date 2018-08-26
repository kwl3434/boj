#include<iostream>
using namespace std;
bool arr[1000][1000];
bool check[1000];
int N,M,s,g;
void DFS(int i){
    check[i]=true;
    for(int j=0;j<N;j++){
        if(arr[i][j]&&!check[j]){
            DFS(j);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin>>N>>M;
    for(int i=0;i<M;i++){
        cin>>s>>g;
        arr[s-1][g-1]=true;
        arr[g-1][s-1]=true;
    }
    g=0;
    for(int i=0;i<N;i++){
        if(!check[i]){
            DFS(i);
            g++;
        }
    }
    cout<<g<<'\n';
}