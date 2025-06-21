#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	long double avg, tot = 0;
	scanf("%d", &n);
	if (n > 1000) {
		return 0;
	}

	int* score = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (score[i] > 100 || score[i] < 0) {
			return 0;
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (score[i] == 0) {
			cnt++;
		}
	}

	if (cnt == n) {
		return 0;
	}

	int max = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int i = 0; i < n; i++) {
		tot += (long double)score[i] / max * 100;
	}
	avg = tot / n;

	printf("%Lf", avg);
	free(score);
	return 0;
}