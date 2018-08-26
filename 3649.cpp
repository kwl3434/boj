#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int x,n;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);

        while(cin>>x>>n){
            int MAX=-1,MAX1=0,MAX2=0;
            vector<int> b(n);
            for(int i=0;i<n;i++){
                            cin>>b[i];
            }
            sort(b.begin(),b.end());
            int mid,L,R;
            for(int i=0;i<n-1;i++){
                 int j=20;
                 L=i;
                 R=n+1;
                 while(j--){
                      mid=(R+L)/2;
                      if((b[i]+b[mid])==(x*10000000)){
                           if(i!=mid&&MAX<(b[mid]-b[i])){
                                 MAX=b[mid]-b[i];
                                 MAX2=b[mid];
                                 MAX1=b[i];
                           }
                      }else if((b[i]+b[mid])<(x*10000000)){
                           L=mid;
                      }else {
                           R=mid;
                      }
                 }
            }
            if(MAX!=-1) cout<<"yes "<<MAX1<<' '<<MAX2<<'\n';
            else cout<<"danger"<<'\n';
        }
}
