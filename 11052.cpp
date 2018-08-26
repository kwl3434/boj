#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    vector<int> v(N+1);
    for(int i=1;i<=N;i++){
        cin>>v[i];
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
             v[i]=max(v[i-j]+v[j],v[i]);
        }
    }
    cout << v[N]<<'\n';
    return 0;
}