#include<iostream>
using namespace std;
bool a[100][100];
bool ans[100][100];
bool check[100];
int N;
void DFS(int q){
        for(int i=0;i<N;i++){
                if(!check[i]&&a[q][i]){
                        check[i]=true;
                        DFS(i);
                }
        }

}
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        cin>>N;
        for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                        cin>>a[i][j];
                }
        }
        for(int i=0;i<N;i++){
                DFS(i);
                for(int j=0;j<N;j++){
                        if(check[j]) ans[i][j]=true;
                        else ans[i][j]=false;
                }
                for(int j=0;j<N;j++){
                        check[j]=false;
                }
        }
        for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                        cout<<ans[i][j]<<' ';
                }
                cout<<'\n';
        }
}