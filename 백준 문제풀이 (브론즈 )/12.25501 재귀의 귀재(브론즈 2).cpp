#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void PALINDROME(char arr[1001], int str, int check)
{

	if (check <=str/2)
	{
		if (arr[check] == arr[str - check-1])
		{
			PALINDROME(arr, str, check+1);
		}
		else
		{
			check++;
			printf("0 %d\n", check);

		}
	}
	else
	{
		printf("1 %d\n",check);
	}

	
}

int main(void)
{
	int testcase;
	int str;
	int check = 0;
	char arr[1001];
	scanf("%d", &testcase);
	for (int a = 0; a < testcase; a++)
	{
		scanf("%s", &arr);
		str = strlen(arr);

		PALINDROME(arr,str,check);
	}
}

