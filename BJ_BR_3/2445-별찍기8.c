#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j, k, l;
	scanf("%d", &n);

	for (i = 1; i < n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (k = 1; k <= (2 * n) - (i * 2); k++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	for (i = 1; i <= n * 2; i++) {
		printf("*");
	}
	printf("\n");

	for (i = 1; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf("*");
		}
		for (k = 1; k <= i * 2; k++) {
			printf(" ");
		}
		for (j = 1; j <= n - i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}