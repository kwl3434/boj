#include<iostream>
#include<algorithm>

using namespace std;
int n;
int a[502][502];
int b[502][502];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j]+max(b[i-1][j-1],b[i-1][j]);
        }
    }
    int MAX=0;
    for(int i=1; i<=n;i++){
        MAX=max(b[n][i],MAX);
    }
    cout<<MAX<<'\n';
}