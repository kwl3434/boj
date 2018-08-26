#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct elem{
    int begin;
    int end;
};
elem Arr[100000];
bool compare(elem a, elem b){
    if(a.begin<b.begin) return true;
    else if(a.begin == b.begin){
        if(a.end<b.end) return true;
    }
    return false;
}
int main(){
    int n;
    scanf("%d", &n);
    int count=0;
    int MIN=0;
    int MAX=0;
    for(int i=0; i<n;i++){
        scanf("%d %d",&Arr[i].begin,&Arr[i].end);
    }
    sort(Arr,Arr+n,compare);
    for(int i=0; i<n; i++){
        if(i==0){
            MIN=Arr[i].begin;
            MAX=Arr[i].end;
            count++;
        }
        else{
            if(MAX<=Arr[i].begin){
                MIN=Arr[i].begin;
                MAX=Arr[i].end;
                count++;
            }
            else if(MAX>Arr[i].end){
                MIN=Arr[i].begin;
                MAX=Arr[i].end;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}