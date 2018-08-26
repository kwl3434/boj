#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int L[9];
	int check[9] = { 0, };
	int randArr[7];
	int Sum = 0;
	int tem = 0;
	//랜덤사용하기 위해
	srand((unsigned int)time(NULL));
	int i;
	for (int i = 0; i < 9; i++) {
		scanf("%d", (L + i));
	}
	while (1) {
		for (i = 0; i < 7; i++)
		{
			int temp = rand() % 9;
			if (check[temp] == 1) {
				i--;
				continue;
			}
			check[temp] = 1;
			randArr[i] = L[temp];
		}
		for (int i = 0; i < 7; i++) {
			Sum += randArr[i];
		}
		if (Sum == 100) {
			break;
		}
		Sum = 0;
		for (int i = 0; i < 9; i++) check[i] = 0;
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6-i; j++) {
			if (randArr[j] > randArr[j + 1]) {
				tem = randArr[j];
				randArr[j] = randArr[j + 1];
				randArr[j + 1] = tem;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		printf("%d\n", *(randArr + i));
	}
	return 0;
}