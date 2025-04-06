#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//테스트 케이스 개수 입력
	int n, i, j;
	int a[50], b[50];
	scanf("%d", &n);

	//테스트 케이스 개수만큼 a,b 입력 반복
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	//a[i]의 한자리 수를 b[i]번 제곱 -> 10으로 나눈 나머지가 0이면 10을, 1이면 1을 ~~~ 출력
	for (i = 0; i < n; i++)
	{
		int cnt = 1;

		int repeat = (b[i] == 0) ? 1 : b[i] % 4;
		if (repeat == 0) repeat = 4;

		for (j = 0; j < repeat; j++)
		{
			cnt = cnt * a[i] % 10;
		}

		if (cnt == 0)
			printf("10\n");
		else
			printf("%d\n", cnt);
	}

	return 0;
}