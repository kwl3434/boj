#include<iostream>
#include<queue>
using namespace std;
queue<int> q;
int tom[1001][1001];
int N,M,count=0,zero=0;
int main(){
    int SIZE,a,b;
    ios_base::sync_with_stdio(false);
    cin>>M>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin>>tom[i][j];
            if(tom[i][j]==1){q.push(i);q.push(j);}
            if(tom[i][j]==0){zero++;}
        }
    }
    SIZE=q.size();
    if(zero==0){cout<<0<<'\n'; return 0;}
    while(!q.empty()){
        for(int i=0;i<SIZE/2;i++){
            a=q.front(); q.pop();
            b=q.front(); q.pop();
            if(a+1<=N){
                if(tom[a+1][b]==0){
                    q.push(a+1); q.push(b);
                    tom[a+1][b]=1;
                }
            }
            if(a-1>0){
                if(tom[a-1][b]==0){
                    q.push(a-1); q.push(b);
                    tom[a-1][b]=1;
                }
            }
            if(b+1<=M){
                if(tom[a][b+1]==0){
                    q.push(a); q.push(b+1);
                    tom[a][b+1]=1;
                }
            }
            if(b-1>0){
                if(tom[a][b-1]==0){
                    q.push(a); q.push(b-1);
                    tom[a][b-1]=1;
                }
            }
        }
        SIZE=q.size();
        count++;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(tom[i][j]==0){cout<<-1<<'\n'; return 0;}
        }
    }
    cout<<count-1<<'\n';
    return 0;
}