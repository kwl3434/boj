#include<stdio.h>
long long int big(long long int a, long long int b);
int main() {
	long long int A, B;
	scanf("%lld %lld", &A, &B);
	if (big(A, B) % 10 == 1) {
		printf("%lld", big(A, B));
	}
	else {
		for (int i = 0; i < big(A, B); i++) {
			printf("%d", 1);
		}
	}
}
long long int big(long long int a, long long int b) {
	return (a%b == 0 ? b : big(b, a%b));
}