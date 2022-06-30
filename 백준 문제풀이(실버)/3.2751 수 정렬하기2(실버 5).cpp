#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 문제 내용은 백준 알고리즘 2751번 참조
// qsort에 대한 설명은 c practice 참조.
int arr[1000000] = { 0 };
int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
	{
		return 1;
	}
	else if (num1 < num2)
	{
		return -1;
	}
	else if (num1 == num2)
	{
		return 0;
	}

}
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int a = 0; a < 1000000; a++)
	{
		arr[a] = 1000001;
	}
	for (int a = 0; a < n; a++)
	{
		scanf("%d", &arr[a]);
		

	}

	qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
	for (int a = 0; a < n; a++)
	{
		printf("%d\n",arr[a]);
	 }
	sort(arr, arr + 19);
}



