#include<iostream>
#include<vector>
using namespace std;
int N;
long long ans;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>N;
	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	int b,c;
	cin>>b>>c;
	for(int i=0;i<N;i++){
		int tmp=a[i];
		tmp-=b;
		ans++;
		if(tmp>0){
			if(tmp%c==0) ans+=tmp/c;
			else ans+=tmp/c+1;
		}
	}
	cout<<ans<<'\n';
}