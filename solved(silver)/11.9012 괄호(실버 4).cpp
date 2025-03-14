#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int count;

	char arr[51] = {0};
	int arr_len;
	int count_arr =0;
	scanf("%d", &count);
	
	for (int a = 0; a < count; a++)
	{
		scanf("%s", &arr);

		arr_len = strlen(arr);

		for (int b = 0; b < arr_len; b++)
		{
			if (arr[b] == '(')
			{
				count_arr++;
			}
			else if(arr[b] == ')')
			{
				count_arr--;
			}

			if (count_arr < 0)
			{
				break;
			}
		}

		if (count_arr == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		count_arr = 0;
		
	}
}
