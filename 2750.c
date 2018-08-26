#include<stdio.h>
int main() {
	int n,i,n1,m,j;
	int arr[1000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &n1);
		arr[i] = n1;
	}
	for (j = 0; j < n-1; j++) {
		for (i = 0; i < (n-j)-1; i++) {
			if (arr[i] > arr[i + 1]) {
				m = arr[i];
				arr[i]=arr[i+1];
				arr[i + 1] = m;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}