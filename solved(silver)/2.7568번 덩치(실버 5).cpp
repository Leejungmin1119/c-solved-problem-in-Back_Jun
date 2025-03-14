#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int n;
	int x[200], y[200];
	int re = 1;
	scanf("%d", &n);
	int count[200] = {0};
	for (int a = 0; a < n; a++)
	{
		scanf("%d %d", &x[a], &y[a]);
	}
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			if ((x[a] < x[b] && y[a] < y[b]) && a != b)
			{
				count[a]++;
			}

		}
		count[a]++;
	}
	for (int a = 0; a < n; a++)
	{
		printf("%d ", count[a]);
	}
	/*
	* 현재 문제
	* 
	* 원래 출력할때는
	* 
	* 2 2 1 2 5 이런식으로 동시에 겹치면 2등 다음에는 5등이 나오고 이래야 하지만, 현재 안되고 4 4 1 4 5 임.
	* i)
	* for을 이용
	*/
}