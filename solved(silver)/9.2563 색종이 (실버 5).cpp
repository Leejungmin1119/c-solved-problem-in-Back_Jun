#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

	//다차원 배열을 선언한뒤 색칠된 곳을 1로 표현 하고 안된 곳을 0으로 표현한뒤 1이상의 배열은 더해서 넓이를 구한다.


	int paper;
	int arr[100][100] = {0};//2차원 배열 선언 가로 세로 100의 길이를 가진 정사각형을 만든다.

	scanf("%d", &paper);

	int a, b;// 색종이의 x,y
	int result = 0;// 전체 색종이의 넓이 

	for (; paper != 0; paper--)//색종이의 갯수만큼 for문을 돌린다.
	{
		scanf("%d %d", &a, &b);

		for (int c = a-1; c < a + 9; c++)//그 색종이를 칠할때 0인곳은 1로 칠하고 널이를 1더한다. 
		{
			for (int d = b - 1; d < b + 9; d++)
			{
				if (arr[c][d] == 0)
				{
					result++;
					arr[c][d]++;
				}

			}
		}
	}

	printf("%d", result);//넓이 최종 출력.
}

