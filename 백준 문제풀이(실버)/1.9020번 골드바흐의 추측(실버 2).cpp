#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int testcase = 0;;
	int arr[10500] = {0};
	int n =0;//골드바흐 파티션을 이용할 변수 지정
	int test1 =0, test2 =0;//2개의 골드바흐 파티션을 저장할 변수 
	int checklist = 0;
	int check = 0;
	scanf("%d",&testcase);//테스트 케이스 설정
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
		for (int a = 2; arr[a] <= (n / 2); a++)// 골드바흐 파티션을 찾기 위한 함수 구현
		{
			for (int b = 2; arr[a] + arr[b] <= n; b++)//버블 정렬을 이용하여 두 소수의 합이 같은  소수를 찾는다
			{
				if (arr[b] != 0 && arr[a] + arr[b] == n)
				{
					if (test1 < 2)//골드바흐 파티션이 1개라면
					{
						test1 = arr[a], test2 = arr[b];
						checklist = arr[b] - arr[a];
					}
					else if(checklist >b-a)//골드바흐 파티션이 2개 이상이라면 
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