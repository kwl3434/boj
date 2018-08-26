#include<iostream>
#include<vector>
using namespace std;
int N,C,MAX,k;
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        cin>>N;
        vector<int> arr(N);
        for(int i=0;i<N;i++){
                cin>>arr[i];
        }
        for(int j=0;j<N;){
                j+=C,C=0;
                k=arr[j];
                for(int i=j;i<N;i++){
                        if(arr[i]==k){
                                C++,k++;
                                MAX=MAX>C?MAX:C;
                        }
                }
        }
        cout<<MAX<<'\n';
}
