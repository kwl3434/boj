#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N,a,b;
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	vector<pair<int,int> > v;
	vector<pair<int,int> >::iterator i;
	cin>>N;
	while(N--){
		cin>>a>>b;
		v.push_back(pair<int, int>(a,b));
	}
	sort(v.begin(),v.end());
	for(i = v.begin();i!=v.end();i++){
		cout<<i->first<<' '<<i->second<<'\n';
	}
}