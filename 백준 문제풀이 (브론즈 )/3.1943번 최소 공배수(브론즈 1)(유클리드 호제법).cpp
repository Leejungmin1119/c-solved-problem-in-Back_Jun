#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	//유클리드 호제법.
	//최대 공약수를 구하는 알고리즘이다.
	int testcase; int save = 0;
	int a, b;//두개의 수를 입력 받을 곳
	int x = 0;int y = 0;//나누는 수  = x , 나눔을 당하는 수 = y
	int hoje = 0;//나머지,최대공약수
	scanf("%d", &testcase);
	for (; testcase > 0; testcase--)
	{
		scanf("%d %d", &a, &b);
		x = b, y = a;
		for (; (x % y) != 0;)
		{
			save = x;//큰수
			x = y;
			
			y = save % y;
		}
		hoje = y;
		printf("%d\n", (a * b) / hoje);
	}



}	