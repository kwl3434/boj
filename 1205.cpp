#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,c,p,level,co=1;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        cin>>n>>c>>p;
        vector<int> a(n+2);
        a[0]=-2000000000;
        for(int i=1;i<=n+1;i++){
                if(i<=n)cin>>a[i];
                else a[i]=-2000000000;
                if(a[i]<c){
                        if(a[i-1]!=c) level+=co;
                        if(i<=p){
                                cout<<level<<'\n';
                                break;
                        }
                        else
                                cout<<-1<<'\n';
                }
                if(a[i]==a[i-1]) co++;
                else {
                        level+=co;
                        co=1;
                }
        }

}
