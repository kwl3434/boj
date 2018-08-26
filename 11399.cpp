#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int N,sum;
int main(){
        cin>>N;
        vector<int> v(N);
        for(int i=0;i<N;i++){
                cin>>v[i];
        }
        sort(v.begin(),v.end());
        sum+=v[0];
        for(int i=1;i<N;i++){
                v[i]=v[i]+v[i-1];
                sum+=v[i];
        }
        cout<<sum<<'\n';
}