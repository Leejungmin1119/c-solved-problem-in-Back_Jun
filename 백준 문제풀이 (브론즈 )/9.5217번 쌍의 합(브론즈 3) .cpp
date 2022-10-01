#pragma warning (disable : 4996)
#include <stdio.h>
int main(void)
{
	int a,testcase;
	scanf("%d",&testcase);
	for (; testcase > 0; testcase--)
	{
		scanf("%d", &a);
		printf("Pairs for %d:", a);

		for (int b = 1; b < a; b++)
		{
			for (int c = b + 1; c < a; c++)
			{
				if (b + c == a)
				{
					if (b >= 2)
					{
						printf(",");
					}
					printf(" %d %d", b, c);
				}
			}
		}
		printf("\n");
	}
}