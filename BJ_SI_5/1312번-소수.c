/*a / b ���� -> (int)a / (int)b -> ������ ����
a / b - ������ -> �Ҽ��� ����
�Ҽ��� * 10 -> n�� ���� 
���� ����� % 10 = ��*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, N;
	scanf("%d %d %d", &A, &B, &N);

	A %= B;	//������ ����

	for (int i = 0; i < N - 1; i++) {
		A = (A * 10) % B; //���� �ڸ��� ���
	}

	A = (A * 10) / B; //N��° �ڸ���
	printf("%d\n", A);
	return 0;
}
