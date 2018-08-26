#include<stdio.h>
int big(int a, int b);
int main() {
	int T = 0, A[1000], B[1000];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", A[i]*B[i]/big(A[i],B[i]));
	}
}
int big(int a, int b) {
	return (a%b == 0 ? b : big(b, a%b));
}