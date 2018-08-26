#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
	char num[99999];
	double cut[10000];
	char* result;
	int n, i = 0;
	double max,avg=0,sum=0;

	scanf("%d\n", &n);
	gets(num);
	result = strtok(num, " ");
	
	while (result != NULL)
	{	
		cut[i] = atof(result);
		i++;
		result = strtok(NULL, " ");
	}
	max = cut[0];
	for (i = 0; i<n; i++) {
		if (cut[i] >= max)
			max = cut[i];
	}
	for (i = 0; i < n; i++) {
		cut[i] = cut[i] / max * 100;
	}
	for (i = 0; i < n; i++) {
		sum += cut[i];
	}
	avg = sum / n;
	printf("%.2f", avg);
}