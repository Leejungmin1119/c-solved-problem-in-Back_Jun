#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x; int y;//체스판 크기를 설정해주는 변수 설정

	char arr[51][51] = {0};
	char check = 'O';
	int print = 0; int min = 65;
	int plus = 0;

	scanf("%d %d", &x, &y);
	for (int a = 0; a < y; a++)//체스판에 색을 입력받아 칠한다.
	{
		for (int b = 0; b < x; b++)
		{
			scanf(" %c",&arr[a][b]);
		}
	}
	while (plus < (x-7) * (y - 7))
	{
		for (int a = 0 + (plus / (x-7)); a < 8 + (plus / (x-7)); a++)
		{

			for (int b = 0 + (plus % (x-7)); b < 8 + (plus % (x-7)); b++)//바꿔야 할 체스 색을 찾는다,
			{

				if (check != arr[a][b])//만약 체스판의 색깔이 전이랑 다르면 
				{
					check == arr[a][b];
				}

				else if (check == arr[a][b] && arr[a][b] == 'B')//만약 체스판의 색깔이 전이랑 같으면 
				{
					check == 'W';
					print++;
				}

				else if (check == arr[a][b] && arr[a][b] == 'W')
				{
					check == 'B';
					print++;
				}
			}

			check = arr[a][(plus%x)];//그다음 줄로 넘어갔을때의 위에 판과 겹치는 경우를 판별하기 위해서 이 코드를 작성한다
		}

		if (min > print)//만약 이 방법이 가장 색을 덜 바꾸는 경우의 수라면 
		{
			min = print;
		}
		print = 0;//바궈야할 색깔을 다시 초기화 한다.
		plus++;//이중 for문이 끝날때 마다 x축 도는 y축을 증가시키거나 감소 시켜서 모든 경우의 수를 탐색한다.

		
	}

	printf("%d", min);
}