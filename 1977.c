#include <stdio.h>
int main() {
	int M = 0, N = 0;
	int Sum = 0, Low = 10001;
	scanf("%d %d", &M, &N);
	for (int i = 1; i <= 100; i++) {
		if (M <= i*i&& i*i <= N) {
			Sum += i*i;
			if (Low > i*i) Low = i*i;
		}
	}
	if (Sum == 0) {
		printf("%d", -1);
	}
	else printf("%d\n%d", Sum, Low);
}