#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int N, M, res;
	scanf("%lld %lld", &N, &M);
	res = N - M;

	if (res >= 0)
		printf("%lld", res);
	else
		printf("%lld", -res);

	return 0;
}