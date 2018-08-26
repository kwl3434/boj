#include<iostream>
using namespace std;
int a[1001][10];
int main(){
        int N;
        cin>>N;
        for(int i=0;i<10;i++){
                a[0][i]=1;
        }
        a[1][0]=10;
        for(int i=1;i<N;i++){
                for(int j=1;j<10;j++){
                        if(a[i][j-1]<a[i-1][j-1]){
                                a[i][j-1]+=10007;
                            a[i][j]=a[i][j-1]-a[i-1][j-1];
                        }
                        else a[i][j]=a[i][j-1]-a[i-1][j-1];
                        a[i][j]%=10007;
                        a[i+1][0]+=a[i][j-1];
                        a[i+1][0]%=10007;
                }
                a[i+1][0]+=1;
                a[i+1][0]%=10007;
        }
        cout<<a[N][0]<<'\n';
}
