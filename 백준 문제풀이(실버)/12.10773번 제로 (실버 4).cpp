#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int num[1000000] = {0};

int main()
{
	int taget =0;
	int result = 0;

	int a;
	scanf("%d",&a);//

	for(int b = 0; b < a; b++)
	{
		scanf("%d", &num[taget]);

		if (num[taget] == 0)
		{
			result -= num[taget - 1];
			taget--;
			continue;
		}

		result += num[taget];
		taget++;
	}
	printf("%d", result);

	
}