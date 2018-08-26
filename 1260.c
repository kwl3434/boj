#include <stdio.h>
#include <stdlib.h>
int N;
char node[1001][1001];
char check[1001];
int F=0,E=0;
int Q[1001];

void DFS(int V){
    int i;
    for(i=1;i<=N;i++){
        if(node[V][i]==1){
            if(check[i]==0){
                printf("%d ",i);
                check[i]++;
                DFS(i);
            }
        }
    }
}
void BFS(int V){
    check[V]=2;
    Q[E]=V;
    E++;
    int V2,i;
    while(F!=E){
        V2=Q[F];
        F++;
        printf("%d ",V2);
        for(i=1;i<=N;i++){
            if(check[i]==1 && node[V2][i]==1){
                Q[E]=i;
                E++;
                check[i]++;
            }
        }
    }
}
int main(){
    int M,V,i,j;
    scanf("%d %d %d",&N,&M,&V);
    while(M--){
        scanf("%d %d",&i,&j);
        node[i][j]=1;node[j][i]=1;
    }
    check[V]=1;
    printf("%d ",V);
    DFS(V);
    printf("\n");
    BFS(V);
    printf("\n");
    
    return 0;
}