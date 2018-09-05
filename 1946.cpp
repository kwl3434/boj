#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ans;
int N;
void cmp(vector<int> &a){
	int MIN=20000000;
	for(int i=0;i<N;i++){
			int comp=a[i];
			if(MIN<comp) continue;
			ans++;
			MIN=comp;
	}
    cout<<ans<<'\n';
	return;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	vector<int> v;
	int T;
	cin>>T;
	while(T--){
		cin>>N;
		ans=0;
		v.resize(N,0);
		int a,b;
		for(int i=0;i<N;i++){
			cin>>a;
			cin>>v[a-1];
		}
		cmp(v);
	}
}
