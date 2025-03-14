#pragma warning(disable:4996)
#include <stdio.h>
int main(void)
{
	/*
	* (브론즈 1) 2275번 부녀회장이 될테야 
	* 사용한 것
	* 
	* 이중 배열,for문,if문등등
	*/
	
	int testcase;//테스터 케이스;
	int k, n;//k = 층  ,n  = 호
	int arr[15][15] = { 0 }; int check = 1;
	for (int a = 0; a <= 14; a++)
	{
		for (int b = 1; b <= 14; b++)
		{
			if (a == 0)
			{
				arr[a][b] = b;
			}
			else//1층이상일때
			{
				while (b >= check)
				{
					arr[a][b] += arr[a - 1][check];
					check++;
				}
			}
			check = 1;
		}
	}
	scanf("%d", &testcase);
	for (; testcase > 0; testcase--)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
}




