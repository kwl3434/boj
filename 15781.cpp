#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int N,M;
    int h;
    int hMax=-1,aMax=-1;
    scanf("%d %d",&N,&M);
    while(N--){
        scanf("%d",&h);
        hMax=max(hMax,h);
    }
    while(M--){
        scanf("%d",&h);
        aMax=max(aMax,h);
    }
    printf("%d\n",hMax+aMax);
}