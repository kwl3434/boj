#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    string S;
    cin>>S;
    for(int i=0;i<S.length();i++){
        if(S[i]=='p'){
            if((i+1)<S.length()){
                if(S[i+1]!='i'){
                    printf("NO\n");
                    return 0;
                }else i+=1;
            }else{
                printf("NO\n");
                return 0;
            }
        }else if(S[i]=='k'){
            if((i+1)<S.length()){
                if(S[i+1]!='a'){
                    printf("NO\n");
                    return 0;
                }else i+=1;
            }else{
                printf("NO\n");
                return 0;
            }
        }else if(S[i]=='c'){
            if((i+2)<S.length()){
                if(S[i+1]!='h'){
                    printf("NO\n");
                    return 0;
                }else if(S[i+2]!='u'){
                    printf("NO\n");
                    return 0;
                }else i+=2;
            }else{
                printf("NO\n");
                return 0;
            }
        }else{
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}