#include <cstdio>
int n, a;
bool c[16];
bool in[31];
bool de[31];
void s(int r){
    if (r>n){a++;return;}
    for(int i = 1; i <= n; i++) {
        if (c[i]+in[r+i]+de[n+(r-i)+1]==0){
            c[i]=in[r+i]=de[n+(r-i)+1]=true;
            s(r+1);
            c[i]=in[r+i]=de[n+(r-i)+1]=false;
        }
    }
}
int main()
{
    scanf("%d", &n);
    s(1);
    printf("%d\n", a);
}