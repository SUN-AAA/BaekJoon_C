#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long combination(int n, int r) {
	if (r > n - r) r = n - r;
	long long result = 1;
	for (int i = 1; i <= r; i++) {
		result *= n--;
		result /= i;
	}
	return result;
}

int main()
{
	int t;
	scanf("%d", &t);
	int* n = (int*)malloc(sizeof(int) * t);
	int* m = (int*)malloc(sizeof(int) * t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n[i], &m[i]);
	}

	for (int i = 0; i < t; i++) {
		printf("%lld\n", combination(m[i], n[i]));
	}

	free(n);
	free(m);

	return 0;
}
