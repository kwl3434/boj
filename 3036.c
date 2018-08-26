#include<stdio.h>
int d(int a, int b);
int main() {
	int N=0, i;
	int M[100];
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &M[i]);
	}
	for (i = 1; i < N; i++) {
		printf("%d/%d\n", M[0] / d(M[0], M[i]), M[i]/ d(M[0], M[i]));
	}
}
int d(int a, int b) {
	return a%b == 0 ? b : d(b, a%b);
}