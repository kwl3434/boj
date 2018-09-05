#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string s[100];
int N;
string ans;
void find_KBS1(int now){
        for(;s[now]!="KBS1";now++){
                ans+='1';
        }
        for(;now>0;now--){
                swap(s[now],s[now-1]);
                ans+='4';
        }
}
void find_KBS2(int now){
        for(;s[now]!="KBS2";now++){
                ans+='1';
        }
        for(;now>1;now--){
                swap(s[now],s[now-1]);
                ans+='4';
        }
}
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        cin>>N;
        for(int i=0;i<N;i++){
                cin>>s[i];
        }
        find_KBS1(0);
        find_KBS2(0);
        cout<<ans<<'\n';
}
