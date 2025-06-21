#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, tot = 0;
	scanf("%d %d", &a, &b);

	int* arr = (int*)malloc(sizeof(int) * b);
	int cnt = 0;
	for (int i = 1; cnt < b; i++) {
		for (int ii = 1; ii <= i && cnt < b; ii++) {
			arr[cnt++] = i;
		}
	}


	for (int i = a-1; i < b; i++) {
		tot += arr[i];
	}

	printf("%d", tot);

	free(arr);

	return 0;
}