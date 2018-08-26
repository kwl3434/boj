#include<iostream>
using namespace std;

const int p=1000000/10*15;
int arr[p];
int main(){
    long long int N;
    cin>>N;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<p;i++){
        arr[i]=arr[i-1]+arr[i-2];
        arr[i]%=1000000;
    }
    cout<<arr[N%p]<<'\n';
}