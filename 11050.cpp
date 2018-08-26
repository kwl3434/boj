#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    int N,K,a=1,b=1,c=1;
    cin >> N >> K;
    for(int i=1;i<=N;i++){
        a*=i;
    }
    for(int i=1;i<=K;i++){
        b*=i;
    }
    for(int i=1;i<=N-K;i++){
        c*=i;
    }
    if((N==K) || (K==0)) cout << 1 <<'\n';
    else cout << a/(b*c)<<'\n';
    return 0;
}