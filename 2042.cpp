#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int N,M,K;
long long make_tree(vector<long long> &a,vector<long long> &tree, int node, int start, int end){
        if(start==end){
                return tree[node]=a[start];
        }else {
                return tree[node]=make_tree(a,tree,node*2,start,(start+end)/2)+make_tree(a,tree,node*2+1, (start+end)/2+1,end);
        }
}
long long sum(vector<long long>&tree, int node, int start, int end, int left, int right){
        if(left>end||right<start){
                return 0;
        }
        if(left<=start && end<=right){
                return tree[node];
        }
        return sum(tree,node*2,start,(start+end)/2, left, right) + sum(tree, node*2+1, (start+end)/2+1, end, left, right);
}
void update(vector<long long> &tree, int node, int start, int end, int index, long long val){
        if(index<start || index > end) return;
        tree[node] = tree[node]+val;
        if(start != end){
                update(tree,node*2, start, (start+end)/2, index, val);
                update(tree,node*2+1,(start+end)/2+1, end, index, val);
        }
}

int main(){
        scanf("%d %d %d",&N,&M,&K);
        vector<long long> a(N);
        int size=(int)ceil(log2(N));
        int tree_size=(1 << (size+1) );
        vector<long long> tree(tree_size);
        M+=K;
        for(int i=0;i<N;i++){
                scanf("%d",&a[i]);
        }
        make_tree(a,tree,1,0,N-1);
        while(M--){
                int q,w;
                long long e;
                scanf("%d",&q);
                if(q==1){
                        scanf("%d %lld",&w,&e);
                        long long val=e-a[w-1];
                        a[w-1]= e;
                        update(tree,1,0,N-1,w-1,val);
                }else if(q==2){
                        scanf("%d %d",&w,&e);
                        printf("%lld\n",sum(tree,1,0,N-1,w-1,e-1));
                }
        }
        return 0;
}
