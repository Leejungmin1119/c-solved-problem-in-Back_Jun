#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int testcase = 0;;
	int arr[10500] = {0};
	int n =0;//������ ��Ƽ���� �̿��� ���� ����
	int test1 =0, test2 =0;//2���� ������ ��Ƽ���� ������ ���� 
	int checklist = 0;
	int check = 0;
	scanf("%d",&testcase);//�׽�Ʈ ���̽� ����
	for (int a = 2; a < 10000; a++)
	{
		arr[a] = a;
	}
	for (int a = 2; a < 10000; a++)
	{
		if (arr[a] == 0)
		{
			check++;
			continue;
		}
		arr[a - check] = arr[a];
		if (check != 0)
		{
			arr[a] = 0;
		}
		for (int b = a, c = a; b * c <= 10000; c++)
		{
			arr[b * c] = 0;
		}
	}
	for (; testcase > 0; testcase--)
	{
		scanf("%d",&n);
		for (int a = 2; arr[a] <= (n / 2); a++)// ������ ��Ƽ���� ã�� ���� �Լ� ����
		{
			for (int b = 2; arr[a] + arr[b] <= n; b++)//���� ������ �̿��Ͽ� �� �Ҽ��� ���� ����  �Ҽ��� ã�´�
			{
				if (arr[b] != 0 && arr[a] + arr[b] == n)
				{
					if (test1 < 2)//������ ��Ƽ���� 1�����
					{
						test1 = arr[a], test2 = arr[b];
						checklist = arr[b] - arr[a];
					}
					else if(checklist >b-a)//������ ��Ƽ���� 2�� �̻��̶�� 
					{
						test1 = arr[a], test2 = arr[b];
						checklist = arr[b]-arr[a];
					}
				}
			}		
		}
		printf("%d %d\n", test1, test2);
		test1 = 0, test2 =0, checklist = 0;
	}
	
}	