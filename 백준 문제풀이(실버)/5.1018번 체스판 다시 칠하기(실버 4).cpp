#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//문제 내용은 백준 알고리즘	1018번 "체스판 다시 칠하기" 참조 

int main(void)
{
	int x; int y;//체스판 크기를 설정해주는 변수 설정

	char check = 'W';//체스판의 색깔이 겹치는지 확인할때 사용되는 변수

	char checkline;//각라인 첫번째의 색깔이 겹치는지 확일할때 사용되는 변수

	char arr[51][51] = { 0 };

	int print = 0; int min = 65;
	int plus = 0;

	scanf("%d %d", &y, &x);
	for (int a = 0; a < y; a++)//체스판에 색을 입력받아 칠한다.
	{
		for (int b = 0; b < x; b++)
		{
			scanf(" %c", &arr[a][b]);
		}
	}
	while (plus < (x - 7) * (y - 7))
	{
		for (int c = 0; c < 2; c++)
		{
			if (c == 0)
			{
				check = 'B';
			}
			else
			{
				check = 'W';
			}

			for (int a = 0 + (plus / (x - 7)); a < 8 + (plus / (x - 7)); a++)
			{

				for (int b = 0 + (plus % (x - 7)); b < 8 + (plus % (x - 7)); b++)//바꿔야 할 체스 색을 찾는다,
				{
					if (check != arr[a][b])//만약 전에 있는 체스판이랑 다른 경우
					{
						check = arr[a][b];

						if (b == (plus % (x - 7)))
						{
							checkline = arr[a][b];
						}
					}
					else if (check == arr[a][b] && arr[a][b] == 'W')//만약 전에 있는 체스판이랑 같고 색이 W이면
					{
						check = 'B';
						print++;

						if (b == (plus % (x - 7)))
						{
							checkline = 'B';
						}

					}
					else if (check == arr[a][b] && arr[a][b] == 'B')//만약 전에 있는 체스판이랑 같고 색이 B이면
					{
						check = 'W';
						print++;

						if (b == (plus % (x - 7)))
						{
							checkline = 'W';
						}
					}

				}

				check = checkline;//그다음 줄로 넘어갔을때의 위에 판과 겹치는 경우를 판별하기 위해서 이 코드를 작성한다
			}
			if (min > print)//만약 이 방법이 가장 색을 덜 바꾸는 경우의 수라면 
			{
				min = print;
			}
			print = 0;//바궈야할 색깔을 다시 초기화 한다.
		}
		plus++;//이중 for문이 끝날때 마다 x축 도는 y축을 증가시키거나 감소 시켜서 모든 경우의 수를 탐색한다.


	}
	printf("%d", min);
}