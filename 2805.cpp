#include<iostream>
#include<algorithm>
using namespace std;
int N,M;
int T[1000000];
int Left,Right,Mid;
long long int c;
int check=32;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>T[i];
    }
    sort(T,T+N);
    Left=0;
    Right=max(T[N-1],M);
    Mid=(Left+Right)/2;
    while(check--){
        c=0;
        for(int i=0;i<N;i++){
            if(T[i]>Mid) c+=T[i]-Mid;
        }
        if(M==c){
            cout<<Mid<<'\n';
            return 0;
        }else if(M>c){
            Right=Mid;
            Mid=(Right+Left)/2;
        }else{
            Left=Mid;
            Mid=(Right+Left)/2;
        }
    }
    cout<<Mid<<'\n';
}
