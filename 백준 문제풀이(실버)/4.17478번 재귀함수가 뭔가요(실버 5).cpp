#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int print(int a, int count, char arr[201])//2 = 0,1 = 3 , 0 = 7 -1
{
	if (count != 0)
	{
		for (int b = (count - 1) * 4; b < count * 4; b++)
		{
			arr[b] = '_';
		}

	}
	printf("%s\"����Լ��� ������?\"\n", arr);

	if (a <= 0)
	{
		printf("%s\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n", arr);
		while (count >= 0)
		{
			printf("%s��� �亯�Ͽ���.\n", arr);
			if (count == 0)
			{
				return 0;
			}
			for (int b = (count * 4) - 1; b >= (count - 1) * 4; b--)
			{
				arr[b] = 0;
			}
			count--;
		}
	}

	printf("%s\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n", arr);
	printf("%s���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n", arr);
	printf("%s���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n", arr);
	print(a - 1, count + 1, arr);
	return 0;

}
int main(void)
{
	char arr[201] = {};
	int a; int count = 0;
	scanf("%d", &a);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	print(a, count, arr);
}