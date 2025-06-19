#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int cnt = 0;
	int n, ntot;
	int new;
	int nn;
	scanf("%d", &n);
	nn = n;
	while (1) {
		if (nn < 10) {
			new = 10 * nn + nn;
			nn = new;
			cnt++;
		}
		else {
			ntot = nn / 10 + nn % 10;
			new = (nn%10) * 10 + ntot % 10;
			nn = new;
			cnt++;
		}

		if (new == n) {
			printf("%d", cnt);
			break;
		}
	}
	
	return 0;
}