#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

	//������ �迭�� �����ѵ� ��ĥ�� ���� 1�� ǥ�� �ϰ� �ȵ� ���� 0���� ǥ���ѵ� 1�̻��� �迭�� ���ؼ� ���̸� ���Ѵ�.


	int paper;
	int arr[100][100] = {0};//2���� �迭 ���� ���� ���� 100�� ���̸� ���� ���簢���� �����.

	scanf("%d", &paper);

	int a, b;// �������� x,y
	int result = 0;// ��ü �������� ���� 

	for (; paper != 0; paper--)//�������� ������ŭ for���� ������.
	{
		scanf("%d %d", &a, &b);

		for (int c = a-1; c < a + 9; c++)//�� �����̸� ĥ�Ҷ� 0�ΰ��� 1�� ĥ�ϰ� ���̸� 1���Ѵ�. 
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

	printf("%d", result);//���� ���� ���.
}

