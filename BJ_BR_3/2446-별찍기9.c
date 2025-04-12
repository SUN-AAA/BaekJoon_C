#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j, k;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (k = 1; k <= (2*n-1)-(2*i); k++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n-1; i++) {
		for (j = n-2; j > i; j--) {
			printf(" ");
		}
		for (k = 1; k <= 3 + 2 * i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}