#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int a, b, i;
	scanf("%lld %lld", &a, &b);

	long long int big = (a >= b) ? a : b;
	long long int small = (a >= b) ? b : a;
	long long int sigma = 0;
	long long int cnt = (big - small + 1) / 2;

	if ((big - small + 1) % 2 == 0) {
		sigma = (big + small) * cnt;
	}
	else {
		sigma = (big + small) * cnt + (small + cnt);
	}

	printf("%lld", sigma);

	return 0;
}