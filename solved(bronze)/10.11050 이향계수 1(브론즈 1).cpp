#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int pec(int *n)//���丮�� n�� ���ϴ� ����� ���� �Լ�
{
	for (int a = *n-1; a> 0; a--)
	{
		*n = *n * a;
	}
	return *n;
}
int main(void)
{
	/*������: ũ�����տ��� ���ϴ� ������ŭ �������� �̴� ������ ������.
	* 
	* ������ ���� n�� ���� k�ǰ��� �������� ���� ������ �� : nCk = n!/(n-k)k! �̴�.
	*/
	int n, k,nk;//������ ���� : n, �̴� �������� ���� : k

	scanf("%d %d", &n, &k);
	if (k == 0 || n-k == 0)
	{
		printf("1");
		return 0;
	}

	nk = n - k;

	pec(&n);
	pec(&k);
	pec(&nk);

	printf("%d", n / (nk * k));

}

