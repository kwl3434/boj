#include<stdio.h>
main() {
	int grade = 65;

	int grad;
	scanf("%d", &grad);

	if (grad >= 90) {
		printf("%c", grade);
	}
	else if (grad >= 80) {
		grade = 66;
		printf("%c", grade);
	}
	else if (grad >= 70) {
		grade = 67;
		printf("%c", grade);
	}
	else if (grad >= 60) {
		grade = 68;
		printf("%c", grade);
	}
	else {
		grade = 70;
		printf("%c", grade);
	}
}