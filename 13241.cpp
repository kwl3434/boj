#include<stdio.h>
long long int big(long long int a, long long int b);
int main() {
	long long int A, B;
		scanf("%lld %lld", &A, &B);
		printf("%lld\n", A*B/big(A,B));
}
long long int big(long long int a, long long int b) {
	return (a%b == 0 ? b : big(b, a%b));
}