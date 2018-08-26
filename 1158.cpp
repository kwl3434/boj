#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    cout<<'<';
    int level=1;
    int tmp=0;
    while(!q.empty()){
        if(level!=m){
            level++;
            q.push(q.front());
            q.pop();
        }else{
            tmp++;
            cout<<q.front();
            q.pop();
            level=1;
            if(tmp!=n) cout<<", ";
        }
    }
    cout<<'>'<<'\n';
}