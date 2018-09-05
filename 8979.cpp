#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int N,K;
typedef struct medal{
        int num,g,s,b;
}M;
bool cmp(M A,M B){
        if(A.g!=B.g) return A.g>B.g;
        else if(A.s!=B.s) return A.s>B.s;
        else if(A.b!=B.b) return A.b>B.b;
        else return A.num==K;
}
int main(){
        scanf("%d %d",&N,&K);
        vector<M> v;
        M c;
        for(int i=0;i<N;i++){
                scanf("%d %d %d %d",&c.num,&c.g,&c.s,&c.b);
                v.push_back(c);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<N;i++){
                if(v[i].num==K) printf("%d\n",i+1);
        }
}
