#include<stdio.h>
int main() {
	int arr[5];
	int i,sum=0,avg=0;
	for (i = 0; i < 5; i++) {
		scanf("%d", arr+i);
		if (arr[i] < 40) {
			arr[i] = 40;
		}
	}
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	avg = sum / 5;
	printf("%d", avg);
}