#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int n; int m;

	int Y =0; int M =0;// 영식,민식의 요금제를 설정한다.
	scanf("%d", &n);
	//영식은 30초마다 10원 -> 29원또는 그 밑에는 10원이 청구.
	//민식은 60초마다 15원씩 청구 -> 59원 또는 그 밑에는 15원이 청구.

	//30초 기준 
	//( 10 / 15 )-> 20 / 15 -> (30 / 30) -> 40 / 30 -> 50 / 45
	for (int a = 0; a < n; a++)
	{
		scanf("%d",&m);

		Y += 10 * ((m / 30) + 1);
		M += 15 * ((m / 60) + 1);

	}
	if (M == Y)
	{
		printf("Y M %d", Y);
	}
	else if (M < Y)
	{
		printf("M %d", M);
	}
	else
	{
		printf("Y %d", Y);
	}
}