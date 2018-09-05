#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,w,L,ans;
	while(cin>>n>>w>>L){
		ans=0;
		vector<int> v(n);
		queue<int> q;
		for(int i=n-1;i>=0;i--){
			cin>>v[i];
		}
		for(int i=0;i<w;i++){
			q.push(0);
		}
		int W=L;
		while(!q.empty()){
			if(q.front()){
				W+=q.front();
				q.pop();
			}else q.pop();
			if(!v.empty()){
				if(W-v.back()>=0){
					W-=v.back();
					q.push(v.back());
					v.pop_back();
				}else {
					q.push(0);
				}
			}
			ans++;
		}
		cout<<ans<<'\n';
	}
}