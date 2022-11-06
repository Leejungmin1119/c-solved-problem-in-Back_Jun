#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <string.h>
void main()
{
    int arr[5] = {0};
    int result =0;
    int save;
    for (int a = 0; a < 5; a++)
    {
        scanf("%d",&arr[a]);
        result += arr[a];
    }

    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            if (arr[a] > arr[b])
            {
                save = arr[a];
                arr[a] = arr[b];
                arr[b] = save;
            }
        }
    }
    printf("%d\n", result / 5);
    printf("%d", arr[2]);
}

