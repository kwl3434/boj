#include<iostream>
using namespace std;
int N,M,sum,c;
int A[10000];
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        cin>>N>>M;
        for(int i=0;i<N;i++){
                cin>>A[i];
        }
        int j=0;
        for(int i=0;i<N;i++){
                sum+=A[i];
                if(sum>M){
                        sum=0;
                        j++;
                        i=j-1;
                }else if(sum==M){
                        c++;
                        sum=0;
                        j++;
                        i=j-1;
                }
        }
        cout<<c<<'\n';
}
