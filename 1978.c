#include<stdio.h>
#include<math.h>
int main() {
	int N=0,n=0,i,count=0,s=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &n);
		if (n == 2) {
			count++;
		}
		if (n == 3) {
			count++;
		}
		if (n % 2 != 0) {
			if (n % 3 != 0) {
				if ((int)sqrt(n)*(int)sqrt(n) != n) {
						count++;
				}
			}
		}
	}
	printf("%d\n", count);
}