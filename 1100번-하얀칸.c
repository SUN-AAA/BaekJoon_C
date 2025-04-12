#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	char str[8][8];
	int cnt = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++) {
			scanf(" %c", &str[i][j]);
		}
	}

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && str[i][j] == 'F') {
				cnt += 1;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}