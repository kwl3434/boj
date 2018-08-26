#include<iostream>
using namespace std;
int dp[101][10];
int main(){
    int N,sum=0;
    cin>>N;
    for(int i=1;i<10;i++) dp[1][i]=1;
    for(int i=2;i<=N;i++){
        for(int j=0;j<10;j++){
            if(j==0){
                dp[i][j]=dp[i-1][j+1];
                dp[i][j]%=1000000000;
            }
            else if(j==9){
                dp[i][j]=dp[i-1][j-1];
                dp[i][j]%=1000000000;
            }else{
                dp[i][j]=dp[i-1][j+1]+dp[i-1][j-1];
                dp[i][j]%=1000000000;
            }
        }
    }
    for(int j=0;j<10;j++){
        sum+=dp[N][j];
        sum%=1000000000;
    }
    cout<<sum<<'\n';
}