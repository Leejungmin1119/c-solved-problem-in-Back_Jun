#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	int a[6] = { 0 }, r[6] = { 0 };

	int minus = 0;
	int big = 0;

	scanf("%d", &number);

	for (int b = 0; b < 6; b++)//각각의 방향과 거리를 입력받음
	{
		scanf("%d %d", &a[b], &r[b]);
	}

	for (int b = 0; b < 6; b++)
	{
		if (a[b % 6] == a[(b + 2) % 6] && a[(b + 1) % 6] == a[(b + 3) % 6])
		{
			minus = r[(b + 2) % 6] * r[(b + 1) % 6];
		}

		if (big < r[b % 6] * r[(b + 1) % 6])
		{
			big = r[b % 6] * r[(b + 1) % 6];
		}
	}

	printf("%d", number * (big - minus));


}
