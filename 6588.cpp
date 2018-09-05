#include<iostream>
using namespace std;
int n;
bool a[1000001];
bool check;
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        for(int i=2;i<=1000000;i++){
                if(a[i]) continue;
                for(int j=i;j+i<=1000000;j+=i){
                        a[j+i]=true;
                }
        }
        a[0]=a[1]=a[2]=true;
        while(1){
                cin>>n;
                if(!n) break;
                for(int i=3;i<=n;i++){
                        if(!a[i]&&!a[n-i]){
                                cout<<n<<" = "<<i<<" + "<<n-i<<'\n';
                                check=true;
                                break;
                        }else check=false;
                }
                if(!check) cout<<"Goldbach's conjecture is wrong."<<'\n';
        }
}
