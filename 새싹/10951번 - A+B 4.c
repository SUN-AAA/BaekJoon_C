#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c[1000];
	int i = 0;

	while (1)
	{
		int res = scanf("%d %d", &a, &b);
		if (res == 2) {
			c[i++] = a + b;
		}
		else if (res == EOF) {
			break;
		}
	}

	for (int j = 0; j < i; j++) {
		printf("%d\n", c[j]);
	}

	return 0;
}