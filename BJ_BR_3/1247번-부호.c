#include <stdio.h>

int main()
{
	int i, n1, n2, n3;
	long long int a[1000000], b[1000000], c[1000000];
	__int128 tot1 = 0;
	__int128 tot2 = 0;
	__int128 tot3 = 0;

	scanf("%d", &n1);
	for (i = 0; i < n1; i++)
	{
		scanf("%lld", &a[i]);
		tot1 += a[i];
	}

	scanf("%d", &n2);
	for (i = 0; i < n2; i++)
	{
		scanf("%lld", &b[i]);
		tot2 += b[i];
	}

	scanf("%d", &n3);
	for (i = 0; i < n3; i++)
	{
		scanf("%lld", &c[i]);
		tot3 += c[i];
	}

	if (tot1 > 0)
		printf("+\n");
	else if (tot1 < 0)
		printf("-\n");
	else
		printf("0\n");

	if (tot2 > 0)
		printf("+\n");
	else if (tot2 < 0)
		printf("-\n");
	else
		printf("0\n");

	if (tot3 > 0)
		printf("+\n");
	else if (tot3 < 0)
		printf("-\n");
	else
		printf("0\n");

	return 0;
}
