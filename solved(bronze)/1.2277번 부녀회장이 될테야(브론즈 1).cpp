#pragma warning(disable:4996)
#include <stdio.h>
int main(void)
{
	/*
	* (����� 1) 2275�� �γ�ȸ���� ���׾� 
	* ����� ��
	* 
	* ���� �迭,for��,if�����
	*/
	
	int testcase;//�׽��� ���̽�;
	int k, n;//k = ��  ,n  = ȣ
	int arr[15][15] = { 0 }; int check = 1;
	for (int a = 0; a <= 14; a++)
	{
		for (int b = 1; b <= 14; b++)
		{
			if (a == 0)
			{
				arr[a][b] = b;
			}
			else//1���̻��϶�
			{
				while (b >= check)
				{
					arr[a][b] += arr[a - 1][check];
					check++;
				}
			}
			check = 1;
		}
	}
	scanf("%d", &testcase);
	for (; testcase > 0; testcase--)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
}




