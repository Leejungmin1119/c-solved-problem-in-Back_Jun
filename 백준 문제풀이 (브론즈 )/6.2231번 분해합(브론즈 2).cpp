#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	for (int b = 0; b <= a; b++)
	{
		if (a== b + ((b / 1000000) % 10) + ((b / 100000) % 10) + ((b / 10000) % 10) + ((b / 1000) % 10) + ((b / 100) % 10) + ((b / 10) % 10) + (b % 10))
		{
			printf("%d", b);
			return 0;
		}
	}
	printf("0");
	return 0;
}