#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
int main(void)
{
	int save_number;//동전의 갯수
	int need_money;//모아야 되는 돈
	int arr[10];
	int count = 0;
	scanf("%d %d", &save_number, &need_money);
	for (int a = 0; a < save_number; a++)
	{
		scanf("%d", &arr[a]);
	}
	for (int a = save_number-1; a >=0; a--)
	{
		while (arr[a] <= need_money)
		{
			count++;
			need_money -= arr[a];
		}
	}
	printf("%d", count);

}