#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//���� ������ ���� �˰��� 4153�� "�����ﰢ��" ����
int main(void)
{
	int a, b, c;//������ ���̸� �����Ѵ�.
	int max;
	while(1)
	{
		

		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)//���� �Է°��� 0 0 0 �̸� �׽�Ʈ ���̽��� �����Ѵ�.
		{
			break;
		}

		max = c;
		if (a >c)//�� ���� ���Ͽ� ���� ū ���� ã�´�.
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

		if (pow(c, 2) == pow(a, 2) + pow(b, 2))//���� ���� �ﰢ���� �̶��?
		{
			printf("right\n");
		}
		else//���� ���� �ﰢ���̶��?
		{
			printf("wrong\n");
		}
	}

}