#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	//��Ŭ���� ȣ����.
	//�ִ� ������� ���ϴ� �˰����̴�.
	int testcase; int save = 0;
	int a, b;//�ΰ��� ���� �Է� ���� ��
	int x = 0;int y = 0;//������ ��  = x , ������ ���ϴ� �� = y
	int hoje = 0;//������,�ִ�����
	scanf("%d", &testcase);
	for (; testcase > 0; testcase--)
	{
		scanf("%d %d", &a, &b);
		x = b, y = a;
		for (; (x % y) != 0;)
		{
			save = x;//ū��
			x = y;
			
			y = save % y;
		}
		hoje = y;
		printf("%d\n", (a * b) / hoje);
	}



}	