/*a / b 연산 -> (int)a / (int)b -> 정수부 구함
a / b - 정수부 -> 소수부 구함
소수부 * 10 -> n번 수행 
연산 결과값 % 10 = 답*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, N;
	scanf("%d %d %d", &A, &B, &N);

	A %= B;	//나머지 남김

	for (int i = 0; i < N - 1; i++) {
		A = (A * 10) % B; //다음 자리수 계산
	}

	A = (A * 10) / B; //N번째 자리수
	printf("%d\n", A);
	return 0;
}
