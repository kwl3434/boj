#include<iostream>
using namespace std;
long long int arr[91];
long long int fibo(int a){
    if(a==0) return arr[0];
    if(arr[a]>0) return arr[a];
    return arr[a]=fibo(a-1)+fibo(a-2);
}
int main(){
    int N;
    cin>>N;
    arr[0]=0;
    arr[1]=1;
    cout<<fibo(N)<<'\n';
}