#include<iostream>
#include<cstdio>

using namespace std;
int k[500001];
int main(){
        int n;
        scanf("%d",&n);
        int * arr=new int[7368788];
        for(int i=2;i<=7368787;i++){
                arr[i]=i;
        }
        for(int i=2;i<=7368787;i++){
                if(arr[i]==0)continue;
                for(int j=i+i;j<=7368787;j+=i){
                        arr[j]=0;
                }
        }
        int l=1;
        for(int i=2;i<=7368787;i++){
                if(arr[i]!=0){k[l]=i;l++;}
        }
        cout<<k[n]<<'\n';
        return 0;
}
