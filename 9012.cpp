#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
char arr[51];
int T,v;
bool check;
int main(){
        cin>>T;
        while(T--){
                check=false;
                v=0;
                scanf("%s",arr);
                for(int i=0;i<strlen(arr);i++){
                        if(arr[i]=='(') v++;
                        else if(v) v--;
                        else check=true;
                }
                if(check) cout<<"NO"<<'\n';
                else if(!v) cout<<"YES"<<'\n';
                else cout<<"NO"<<'\n';
        }
}
