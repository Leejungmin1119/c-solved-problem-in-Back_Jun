#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int n; int m;

	int Y =0; int M =0;// ����,�ν��� ������� �����Ѵ�.
	scanf("%d", &n);
	//������ 30�ʸ��� 10�� -> 29���Ǵ� �� �ؿ��� 10���� û��.
	//�ν��� 60�ʸ��� 15���� û�� -> 59�� �Ǵ� �� �ؿ��� 15���� û��.

	//30�� ���� 
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