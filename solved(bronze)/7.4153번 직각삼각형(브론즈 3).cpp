#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//문제 내용은 백준 알고리즘 4153번 "직각삼각형" 참조
int main(void)
{
	int a, b, c;//세변의 길이를 지정한다.
	int max;
	while(1)
	{
		

		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)//만약 입력값이 0 0 0 이면 테스트 케이스를 종료한다.
		{
			break;
		}

		max = c;
		if (a >c)//각 변을 비교하여 가장 큰 변을 찾는다.
		{
			max = c;
			c = a;
			a = max;
		}
		
		if (b > c)
		{
			 max= b;
			 b = c;
			 c = max;
		}

		if (pow(c, 2) == pow(a, 2) + pow(b, 2))//만약 직각 삼각형이 이라면?
		{
			printf("right\n");
		}
		else//만약 직각 삼각형이라면?
		{
			printf("wrong\n");
		}
	}

}