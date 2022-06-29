#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int n, m;
	int arr[100] = {0};
	int check = 300000; int su = 0;
	scanf("%d %d", &n, &m);
	for (int a = 0; a < n; a++)
	{
		scanf("%d",&arr[a]);
	}
	for (int a=0;a<n;a++)
	{
		for (int b = 0; b < n; b++)
		{
			if (a == b)
			{
				continue;
			}
			for (int c = 0; c < n; c++)
			{
				if ((c != b && a != c && m-(arr[a] + arr[b] + arr[c])< check) && (arr[a] +arr[b] + arr[c]) <=m)
				{
					check = m - (arr[a] + arr[b] + arr[c]);
					su = arr[a] + arr[b] + arr[c];
				}
			}
		}
	}
	printf("%d", su);
}
//93 x, 181 o ,245 x ,214 x , 315, 36 x,