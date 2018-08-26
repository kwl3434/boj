#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
	char num[99999];
	int cut[10000];
	char* result;
	int n, x, i=0;

	scanf("%d %d\n", &n, &x);
	gets(num);
	result = strtok(num, " ");
	
	while (result != NULL)
	{	
		cut[i] = atoi(result);
		i++;
		result = strtok(NULL, " ");
	}
	for (i = 0; i<n; i++) {
		if (cut[i]<x)
			printf("%d ", cut[i]);
	}
	
	
}