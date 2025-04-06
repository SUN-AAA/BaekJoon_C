#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, res[10000], i;
	int cnt = 0;
	
	for (i = 0; i < 100; i++)
	{
		scanf("%d %d", &a, &b);
		if (a != 0 || b != 0)
		{
			++cnt;
			res[i] = a + b;
		}
		else
			break;
	}

	for (i = 0; i < cnt; i++)
		printf("%d\n", res[i]);

	return 0;
}