#include<bits/stdc++.h>
using namespace std;
const int MAX = 500001;
int n;
long long ans;
vector<int> arr[MAX];
bool visit[MAX];
void DFS(int here, int dist){
	visit[here] = true;
	bool isLeaf = true;
	for(int &there : arr[here]){
		if(visit[there]) continue;
		isLeaf = false;
		DFS(there, dist+1);
	}
	if(!isLeaf) return;
	ans += dist;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0; i<n-1; ++i){
		int a, b;
		cin >> a >> b;
		arr[a-1].push_back(b-1);
		arr[b-1].push_back(a-1);
	}
	DFS(0, 0);
	if(ans&1) cout << "Yes";
	else cout << "No";
}