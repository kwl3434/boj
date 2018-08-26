#include<string>
#include<iostream>
using namespace std;
int main(){
    int N,M;
    char check=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s,com;
    cin>>N>>M>>s;
    while(M--){
        int j=0;
        cin>>com;
       if(com.length()<N){ cout<<"false"<<'\n';continue;};
        for(int i=0;i<com.length();i++){
            if(check==j&&s[j]==com[i]){
                check=j+1;
                j++;
            }
        }
        if(s.length()==check) cout<<"true"<<'\n';
        else cout<<"false"<<'\n';
        check=0;
    }
}