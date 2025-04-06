#include <stdio.h>
int main()
{
	//테스트 케이스 개수 입력
	int n, i, j;
	int a[10000], b[10000];
	scanf("%d", &n);

	//테스트 케이스 개수만큼 a,b 입력 반복
	for (i = 0; i < n; i++)
		scanf("%d %d", &a[i], &b[i]);
	
	//a[i]의 일의자리 수를 b[i]번 제곱 -> 10으로 나눈 나머지가 0이면 10을, 1이면 1을 ~~~ 출력
	for (i = 0; i < n; i++)
	{
		int cnt = 1;
 
       	    	for (j = 0; j < b[i] ; j++)
	    	{
	        	cnt = a[i] * cnt % 10;
	    	}

        
		if (cnt == 0)
			printf("10\n");
		else
			printf("%d\n", cnt);
	}

	return 0;
}
