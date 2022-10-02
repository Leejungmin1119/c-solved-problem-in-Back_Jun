#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	int number;
	int people_arr[1001] ={0};
	int people;//
	int save_people =0;//뺀 사람의 갯수를 지정하는 변수
	int save_count =0;//사람의 번호를 저장하는 변수 지정
	scanf("%d %d",&people,&number);

	for (int count = 1; count <=people; count++)
	{
		people_arr[count]++;
	}
	
	printf("<");
	for (int count = 1;save_people != people ; count = (count % people) + 1)
	{
		if (people_arr[count] == 1) 
		{
			save_count++;
		}

		if (save_count == number)//만약 지워야 할 사람에 도달하면?
		{
			if (save_people == people - 1)
			{
				printf("%d>",count);
				people_arr[count] = 0;

				save_count = 0;
				save_people++;
				continue;
			}
			printf("%d, ", count);
			people_arr[count] = 0;

			save_count = 0;
			save_people++;
		}

	}
}

