#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    string s;
    cin>>s;
    cout<<s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]=='-') cout<<s[i+1];
    }
    cout<<'\n';
}