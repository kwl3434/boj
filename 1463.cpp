#include<iostream>
using namespace std;
int min(int a, int b){
    return a>b? b:a;
}
int main(){
    int N,i;
    cin>>N;
    int *count = new int[1000001];
    count[1]=0;
    for(i=2;i<=N;i++){
        count[i]=count[i-1]+1;
        if(i%2==0) count[i]=min(count[i],count[i/2]+1);
        if(i%3==0) count[i]=min(count[i],count[i/3]+1);
    }
    cout<<count[N]<<endl;
    delete count;
    return 0;
}