#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
char arr[10];
bool gre(int a, int b){
        return a>b;
}
int main(){
        scanf("%s",arr);
        sort(arr,arr+strlen(arr));
        for(int i=strlen(arr)-1;i>=0;i--){
                printf("%c",arr[i]);
        }
        printf("\n");
}
