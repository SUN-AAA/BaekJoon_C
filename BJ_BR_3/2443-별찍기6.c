#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j, k;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++) {
			printf(" ");
		}
		for (k = 1; k <= (2 * n -1) - 2 * (i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
}