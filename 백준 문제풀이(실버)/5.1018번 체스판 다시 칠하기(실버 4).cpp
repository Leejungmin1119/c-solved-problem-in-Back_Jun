#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//���� ������ ���� �˰���	1018�� "ü���� �ٽ� ĥ�ϱ�" ���� 

int main(void)
{
	int x; int y;//ü���� ũ�⸦ �������ִ� ���� ����

	char check = 'W';//ü������ ������ ��ġ���� Ȯ���Ҷ� ���Ǵ� ����

	char checkline;//������ ù��°�� ������ ��ġ���� Ȯ���Ҷ� ���Ǵ� ����

	char arr[51][51] = { 0 };

	int print = 0; int min = 65;
	int plus = 0;

	scanf("%d %d", &y, &x);
	for (int a = 0; a < y; a++)//ü���ǿ� ���� �Է¹޾� ĥ�Ѵ�.
	{
		for (int b = 0; b < x; b++)
		{
			scanf(" %c", &arr[a][b]);
		}
	}
	while (plus < (x - 7) * (y - 7))
	{
		for (int c = 0; c < 2; c++)
		{
			if (c == 0)
			{
				check = 'B';
			}
			else
			{
				check = 'W';
			}

			for (int a = 0 + (plus / (x - 7)); a < 8 + (plus / (x - 7)); a++)
			{

				for (int b = 0 + (plus % (x - 7)); b < 8 + (plus % (x - 7)); b++)//�ٲ�� �� ü�� ���� ã�´�,
				{
					if (check != arr[a][b])//���� ���� �ִ� ü�����̶� �ٸ� ���
					{
						check = arr[a][b];

						if (b == (plus % (x - 7)))
						{
							checkline = arr[a][b];
						}
					}
					else if (check == arr[a][b] && arr[a][b] == 'W')//���� ���� �ִ� ü�����̶� ���� ���� W�̸�
					{
						check = 'B';
						print++;

						if (b == (plus % (x - 7)))
						{
							checkline = 'B';
						}

					}
					else if (check == arr[a][b] && arr[a][b] == 'B')//���� ���� �ִ� ü�����̶� ���� ���� B�̸�
					{
						check = 'W';
						print++;

						if (b == (plus % (x - 7)))
						{
							checkline = 'W';
						}
					}

				}

				check = checkline;//�״��� �ٷ� �Ѿ������ ���� �ǰ� ��ġ�� ��츦 �Ǻ��ϱ� ���ؼ� �� �ڵ带 �ۼ��Ѵ�
			}
			if (min > print)//���� �� ����� ���� ���� �� �ٲٴ� ����� ����� 
			{
				min = print;
			}
			print = 0;//�ٱž��� ������ �ٽ� �ʱ�ȭ �Ѵ�.
		}
		plus++;//���� for���� ������ ���� x�� ���� y���� ������Ű�ų� ���� ���Ѽ� ��� ����� ���� Ž���Ѵ�.


	}
	printf("%d", min);
}