#include<iostream>
#include<vector>
using namespace std;
int N;
int main(){
        cin>>N;
        vector<long long> one(N+1);
        vector<long long> zero(N+1);
        one[1]=1;
        zero[2]=1;
        for(int i=3;i<=N;i++){
                one[i]+=zero[i-1];
                zero[i]+=zero[i-1]+one[i-1];
        }
        cout<<one[N]+zero[N]<<'\n';
}
