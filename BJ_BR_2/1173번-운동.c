/* 
N : 운동하는 시간(분)
m : 초기 맥박
T : 1분 운동하면 맥박이 T만큼 증가
M : 최대 맥박(M보다 작거나 같을 때에만 운동 가능)
R : 1분 휴식하면 맥박이 R만큼 감소

1 <= N, T, R <= 200
50 <= m <= M <= 200

N, m, M, T, R이 주어졌을 때
N분 운동하는데 필요한 시간의 최솟값은?
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N, m, M, T, R, cnt = 0, rate, exer = 0;

	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
	rate = m;

	if (m + T > M) {
		printf("%d", -1);
	}
	else {
		while (1) {
			if (rate + T <= M) {
				exer++;
				rate += T;
			}
			else {
				rate -= R;
				if (rate <= m) {
					rate = m;
				}
			}
			cnt++;

			if (exer == N) {
				printf("%d", cnt);
				break;
			}
			else if (exer > N) {
				printf("%d", -1);
				break;
			}
		}
	}

	return 0;
}
