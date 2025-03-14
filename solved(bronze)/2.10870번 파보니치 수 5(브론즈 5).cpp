#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int arr[21] = {	0,1,1};
	for (int a = 3; a <= n; a++)
	{
		arr[a] = arr[a - 1] + arr[a - 2];
	}
	printf("%d", arr[n]);


}	