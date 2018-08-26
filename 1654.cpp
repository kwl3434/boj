#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long MAX,R;
int L,mid,N,K,c;
long long sum;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        cin>>K>>N;
        vector<long long> v(K);
        for(int i=0;i<K;i++){
                cin>>v[i];
                sum+=v[i];
                MAX=max(MAX,v[i]);
        }
        sum/=N;
        R=MAX+1;
        L=1;
        int j=32;
        MAX=0;
        while(j--){
                mid=(R+L)/2;
                c=0;
                for(int i=0;i<K;i++){
                        c+=v[i]/mid;
                }
                if(c==N){
                        MAX=max(MAX,(long long)mid);
                        L=mid;
                }
                else if(c>N){
                        L=mid;
                }else{
                        R=mid;
                }
        }
        if(L==R-1) cout<<L<<'\n';
        else cout<<MAX<<'\n';
}
