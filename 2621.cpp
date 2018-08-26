#include<iostream>
#include<algorithm>
using namespace std;
char color[5];
int num[5];
int main(){
        for(int i=0;i<5;i++){
                cin>>color[i]>>num[i];
        }
        sort(num,num+5);
        if(color[0]==color[1]&&color[1]==color[2]&&color[2]==color[3]&&color[3]==color[4]){
                if(num[0]+1==num[1]&&num[1]+1==num[2]&&num[2]+1==num[3]&&num[3]+1==num[4]){
                        cout<<num[4]+900<<'\n';
                }else if((num[0]==num[1]&&num[1]==num[2]&&num[2]==num[3])||(num[1]==num[2]&&num[2]==num[3]&&num[3]==num[4])){
                        cout<<num[1]+800<<'\n';
                }else if(num[0]==num[1]&&num[1]==num[2]&&num[3]==num[4]){
                        cout<<num[0]*10+num[3]+700<<'\n';
                }else if(num[0]==num[1]&&num[2]==num[3]&&num[3]==num[4]){
                        cout<<num[0]+num[2]*10+700<<'\n';
                }else cout<<num[4]+600<<'\n';
        }else{
                if((num[0]==num[1]&&num[1]==num[2]&&num[2]==num[3])||(num[1]==num[2]&&num[2]==num[3]&&num[3]==num[4])){
                        cout<<num[1]+800<<'\n';
                }else if(num[0]==num[1]&&num[1]==num[2]&&num[3]==num[4]){
                        cout<<num[0]*10+num[3]+700<<'\n';
                }else if(num[0]==num[1]&&num[2]==num[3]&&num[3]==num[4]){
                        cout<<num[0]+num[2]*10+700<<'\n';
                }else if(num[0]+1==num[1]&&num[1]+1==num[2]&&num[2]+1==num[3]&&num[3]+1==num[4]){
                        cout<<num[4]+500<<'\n';
                }else if(num[0]==num[1]&&num[1]==num[2]){
                        cout<<num[0]+400<<'\n';
                }else if(num[1]==num[2]&&num[2]==num[3]){
                        cout<<num[1]+400<<'\n';
                }else if(num[2]==num[3]&&num[3]==num[4]){
                        cout<<num[2]+400<<'\n';
                }else if(num[0]==num[1]&&num[2]==num[3]){
                        cout<<num[3]*10+num[1]+300<<'\n';
                }else if(num[1]==num[2]&&num[3]==num[4]){
                        cout<<num[3]*10+num[1]+300<<'\n';
                }else if(num[0]==num[1]&&num[3]==num[4]){
                        cout<<num[3]*10+num[1]+300<<'\n';
                }else if(num[0]==num[1]){
                        cout<<num[1]+200<<'\n';
                }else if(num[1]==num[2]){
                        cout<<num[1]+200<<'\n';
                }else if(num[2]==num[3]){
                        cout<<num[2]+200<<'\n';
                }else if(num[3]==num[4]){
                        cout<<num[3]+200<<'\n';
                }else cout<<num[4]+100<<'\n';
        }
}
