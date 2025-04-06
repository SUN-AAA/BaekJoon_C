#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int t, a, b, res[1000], i;
	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		res[i] = a + b;
	}

	for (i = 0; i < t; i++)
	{
		printf("%d\n", res[i]);
	}

	return 0;
}