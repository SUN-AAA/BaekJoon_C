#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	int fac = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fac = fac * i;
	}
	printf("%d", fac);

	return 0;
}