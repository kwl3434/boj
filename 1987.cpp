#include<iostream>
#include<vector>
using namespace std;
int R,C,MAX;
char a[21][21];
bool b[21][21];
void DFS(vector<char> &v,int i,int j,int cou){
        v.push_back(a[i][j]);
        b[i][j]=true;
        bool check=false;
        if(i+1<R){
                check=false;
                for(int k=0;k<v.size();k++){
                        if(a[i+1][j]==v[k]) {check=true;break;}
                }
                if(!check)DFS(v,i+1,j,cou+1);
        }
        if(j+1<C){
                check=false;
                for(int k=0;k<v.size();k++){
                        if(a[i][j+1]==v[k]) {check=true;break;}
                }
                if(!check)DFS(v,i,j+1,cou+1);
        }
        if(i-1>=0){
                check=false;
                for(int k=0;k<v.size();k++){
                        if(a[i-1][j]==v[k]) {check=true;break;}
                }
                if(!check)DFS(v,i-1,j,cou+1);
        }
        if(j-1>=0){
                check=false;
                for(int k=0;k<v.size();k++){
                        if(a[i][j-1]==v[k]) {check=true;break;}
                }
                if(!check)DFS(v,i,j-1,cou+1);
        }
        MAX=MAX<cou?cou:MAX;
        v.pop_back();
}
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        cin>>R>>C;
        vector<char> v;
        for(int i=0;i<R;i++){
                cin>>a[i];
        }
        DFS(v,0,0,1);
        cout<<MAX<<'\n';

}