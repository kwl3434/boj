#include<stdio.h>
int main() {
	int IN = 0, OUT = 0, TOTAL=0,TOP=0;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &OUT, &IN);
		TOTAL = TOTAL - OUT + IN;
		if (TOTAL > TOP) {
			TOP = TOTAL;
		}
	}
	printf("%d\n", TOP);
}