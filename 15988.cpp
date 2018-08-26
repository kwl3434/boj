#include<iostream>
#include<vector>
using namespace std;
int T,n;
int main() {
	cin >> T;
    vector<long long> a(1000001);
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	for (int i = 4; i <= 1000000; i++) {
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
		a[i] %= 1000000009;
	}
	while (T--) {
		cin >> n;
		cout << a[n]<<'\n';
	}
}