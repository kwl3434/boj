#include<cstdio>
#include<algorithm>
using namespace std;
int arr[1000][1000];
int main(){
    int N,a,b,MAX=-1;
    scanf("%d %d %d",&N,&a,&b);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
            if(i==a-1 || j==b-1){
                MAX=max(MAX,arr[i][j]);
            }
        }
    }
    if(MAX<=arr[a-1][b-1]) printf("HAPPY\n");
    else printf("ANGRY\n");
}