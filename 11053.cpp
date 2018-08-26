#include<iostream>
#include<vector>
using namespace std;
int N,c,MAX=1;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        cin>>N;
        vector<int> a(N);
        vector<int> b(N);
        for(int i=0;i<N;i++){
                cin>>a[i];
        }
        b[N-1]=1;
        for(int i=N-2;i>=0;i--){
                for(int j=N-1;j>i;j--){
                        if(a[i]<a[j]) b[i]=b[i]>b[j]+1?b[i]:b[j]+1;
                        else if(!b[i]) b[i]=1;
                        MAX=MAX>b[i]?MAX:b[i];
                }
        }
        cout<<MAX<<'\n';
}
