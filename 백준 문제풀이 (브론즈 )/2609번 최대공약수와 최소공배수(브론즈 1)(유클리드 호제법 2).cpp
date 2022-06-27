#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int a = 0; int b = 0;
	int x = 0; int y = 0;
	int save;
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		x = a;
		y = b;//x가 y보다 큰 수임
	}
	else
	{
		x = a; y = b;
	}
	while ((x % y) != 0)
	{
		save = x;
		x = y;
		y = (save % y);
	}
	printf("%d\n%d", y, (a * b) / y);
	
	
}	