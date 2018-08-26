#include<iostream>
#include<deque>
#include<cstdio>
using namespace std;
int N,M;
char a[101][101];
bool c[100][100];
int count[100][100];
int main(){
    int i=0,j=0;
    deque<int> dq;
    scanf("%d %d",&N, &M);
    for(int k=0;k<N;k++){
        scanf("%s",a[k]);
    }
    dq.push_back(i);dq.push_back(j);
    c[0][0]=true;
    count[0][0]=1;
    while(i!=N-1 || j!=M-1){
        i=dq.front(); dq.pop_front();
        j=dq.front(); dq.pop_front();
        if(i+1<N){
            if(c[i+1][j]==false&&a[i+1][j]=='1'){
                c[i+1][j]=true;
                if(count[i+1][j]==0) count[i+1][j]=count[i][j]+1;
                else count[i+1][j]=count[i+1][j]<count[i][j]+1?count[i+1][j]:count[i][j]+1;
                
                dq.push_back(i+1); dq.push_back(j);
            }
        }
        if(j+1<M){
            if(c[i][j+1]==false&&a[i][j+1]=='1'){
                c[i][j+1]=true;
                if(count[i][j+1]==0) count[i][j+1]=count[i][j]+1;
                else count[i][j+1]=count[i][j+1]<count[i][j]+1?count[i][j+1]:count[i][j]+1;
                
                dq.push_back(i); dq.push_back(j+1);
            }
        }
        if(i-1>=0){
            if(c[i-1][j]==false&&a[i-1][j]=='1'){
                c[i-1][j]=true;
                if(count[i-1][j]==0) count[i-1][j]=count[i][j]+1;
                else count[i-1][j]=count[i-1][j]<count[i][j]+1?count[i-1][j]:count[i][j]+1;
                
                dq.push_back(i-1); dq.push_back(j);
            }
        }
        if(j-1>=0){
            if(c[i][j-1]==false&&a[i][j-1]=='1'){
                c[i][j-1]=true;
                if(count[i][j-1]==0) count[i][j-1]=count[i][j]+1;
                else count[i][j-1]=count[i][j-1]<count[i][j]+1?count[i][j-1]:count[i][j]+1;
                
                dq.push_back(i); dq.push_back(j-1);
            }
        }
    }
    printf("%d\n",count[N-1][M-1]);
    return 0;
}