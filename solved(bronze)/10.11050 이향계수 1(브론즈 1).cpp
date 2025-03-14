#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int pec(int *n)//펙토리얼 n을 구하는 사용자 지정 함수
{
	for (int a = *n-1; a> 0; a--)
	{
		*n = *n * a;
	}
	return *n;
}
int main(void)
{
	/*이향계수: 크기집합에서 원하는 갯수만큼 순서없이 뽑는 조합의 가짓수.
	* 
	* 원소의 갯수 n에 대해 k의개의 아이템을 봅는 조합의 수 : nCk = n!/(n-k)k! 이다.
	*/
	int n, k,nk;//원소의 갯수 : n, 뽑는 아이템의 갯수 : k

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

