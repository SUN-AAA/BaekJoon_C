#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j, k;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = n; j > i+1; j--) {
			printf(" ");
		}
		for (k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i < n; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (k = 1; k <= n - i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}