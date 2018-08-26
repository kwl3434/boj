#include<iostream>
using namespace std;
int N,col,row,countc,countr;
char arr[100][100];
bool check,check1;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        cin>>N;
        for(int i=0;i<N;i++){
                cin>>arr[i];
        }
        for(int i=0;i<N;i++){
                row=0;col=0;check=false;check1=false;
                for(int j=0;j<N;j++){
                        if(!check){
                                if(arr[i][j]=='.'){
                                        row++;
                                        check=true;
                                }
                        }else{
                                if(arr[i][j]=='.'){
                                        row++;
                                }else if(row>=2){
                                        countr++;
                                        row=0;
                                        check=false;
                                }else{
                                        row=0;
                                        check=false;
                                }
                        }
                        if(!check1){
                                if(arr[j][i]=='.'){
                                        col++;
                                        check1=true;
                                }
                        }else{
                                if(arr[j][i]=='.'){
                                        col++;
                                }else if(col>=2){
                                        countc++;
                                        col=0;
                                        check1=false;
                                }else{
                                        col=0;
                                        check1=false;
                                }
                        }
                }
                if(row>=2) countr++;
                if(col>=2) countc++;
        }
        cout<<countr<<' '<<countc<<'\n';
}
