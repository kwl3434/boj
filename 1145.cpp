#include <iostream>
#include <algorithm>
using namespace std;
int a[5];
int main(){
	int ans = 0;
	for (int i = 0; i < 5; i++){
		cin >> a[i];
    }
	sort(a, a+5);
	for (int i=a[2];;i++){
		ans = 0;
		for (int j = 0; j < 5; j++){
			if (i%a[j] == 0){
                ans++;
            }
        }
		if (ans >= 3){
			cout << i;
			return 0;
		}
	}
}