#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int N,M,a;
bool check;
int main(){
        int L,R,mid;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        cin>>N;
        vector<int> v(N);
        for(int i=0;i<N;i++){
                cin>>v[i];
        }
        sort(v.begin(),v.end());
        cin>>M;
        while(M--){
                cin>>a;
                L=0;
                R=N-1;
                mid=(R+L)/2;
                int size=17;
                check=false;
                while(size--){
                        if(v[mid]==a||v[R]==a||v[L]==a){
                                check=true;
                                break;
                        }else if(v[mid]>a){
                                R=mid;
                                mid=(L+R)/2;
                        }else{
                                L=mid;
                                mid=(L+R)/2;
                        }
                }
                if(check) cout<<1<<'\n';
                else cout<<0<<'\n';
        }
}
