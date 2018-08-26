#include<stdio.h>
int sum=0;
int d(int n);
int main() {
	int k = 1, m = 1, b = 0;;
	for (k = 1; k <= 10000; k++) {
		for (m = 1; m <= 10000; m++) {
			if (k == d(m)) {
				break;
			}
		}
		if (m == 10001) { printf("%d\n", k); }
	}
}
int d(int n) {
	sum = n + n / 1000 + (n / 100 - (n / 1000) * 10) + (n / 10 - (n / 100) * 10) + (n % 10);
	return sum;
}