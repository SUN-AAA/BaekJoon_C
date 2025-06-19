#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char word[1000000];
	scanf("%s", word);
	int len = strlen(word);

	for (int i = 0; i <= len; i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			word[i] -= 32;
		}
	}
	
	int cnt[26] = { 0 };
	for (int i = 0; i <= len; i++) {
		if (word[i] == 'A') {
			cnt[0] += 1;
		}
		else if (word[i] == 'B') {
			cnt[1] += 1;
		}
		else if (word[i] == 'C') {
			cnt[2] += 1;
		}
		else if (word[i] == 'D') {
			cnt[3] += 1;
		}
		else if (word[i] == 'E') {
			cnt[4] += 1;
		}
		else if (word[i] == 'F') {
			cnt[5] += 1;
		}
		else if (word[i] == 'G') {
			cnt[6] += 1;
		}
		else if (word[i] == 'H') {
			cnt[7] += 1;
		}
		else if (word[i] == 'I') {
			cnt[8] += 1;
		}
		else if (word[i] == 'J') {
			cnt[9] += 1;
		}
		else if (word[i] == 'K') {
			cnt[10] += 1;
		}
		else if (word[i] == 'L') {
			cnt[11] += 1;
		}
		else if (word[i] == 'M') {
			cnt[12] += 1;
		}
		else if (word[i] == 'N') {
			cnt[13] += 1;
		}
		else if (word[i] == 'O') {
			cnt[14] += 1;
		}
		else if (word[i] == 'P') {
			cnt[15] += 1;
		}
		else if (word[i] == 'Q') {
			cnt[16] += 1;
		}
		else if (word[i] == 'R') {
			cnt[17] += 1;
		}
		else if (word[i] == 'S') {
			cnt[18] += 1;
		}
		else if (word[i] == 'T') {
			cnt[19] += 1;
		}
		else if (word[i] == 'U') {
			cnt[20] += 1;
		}
		else if (word[i] == 'V') {
			cnt[21] += 1;
		}
		else if (word[i] == 'W') {
			cnt[22] += 1;
		}
		else if (word[i] == 'X') {
			cnt[23] += 1;
		}
		else if (word[i] == 'Y') {
			cnt[24] += 1;
		}
		else if (word[i] == 'Z') {
			cnt[25] += 1;
		}
	}

	int max = 0;
	int sec = 0;
	int maxi = 0;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > max) {
			maxi = i;
			max = cnt[i];
		}
		else if (cnt[i] > sec) {
			sec = cnt[i];
		}
	}

	if (max == sec) {
		printf("?");
	}
	else {
		printf("%c", maxi + 65);
	}

	return 0;
}