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
	printf("%s\"재귀함수가 뭔가요?\"\n", arr);

	if (a <= 0)
	{
		printf("%s\"재귀함수는 자기 자신을 호출하는 함수라네\"\n", arr);
		while (count >= 0)
		{
			printf("%s라고 답변하였지.\n", arr);
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

	printf("%s\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n", arr);
	printf("%s마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n", arr);
	printf("%s그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n", arr);
	print(a - 1, count + 1, arr);
	return 0;

}
int main(void)
{
	char arr[201] = {};
	int a; int count = 0;
	scanf("%d", &a);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	print(a, count, arr);
}