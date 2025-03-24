#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable : 4996)


void find_value(int *start,int *end,int arr[])
{
    int value1 = 1000000001,value2 =1000000001;
    int sum =0;
    while(start < end)
    {
        sum = *start + *end;
        
        //0일때
        if (sum == 0)
        {
            value1 = *start;
            value2 = *end;
            break;
        }

        if (abs(sum) < abs(value1 + value2))
        {
            value1 = *start;
            value2 = *end;
        }

        //합이 0보다 클때
        else if(sum > 0)
        {
            *end--;
        }
        //합이 0보다 작을때
        else if(sum < 0)
        {
            *start++;
        }
    }

    printf("%d %d",value1,value2);
}

int main()
{
    int* arr;
    int len;

    scanf("%d",&len);

    //동적 할당
    arr = (int*)malloc(sizeof(int)*len);

    for(int i = 0;i<len;i++)
    {
        scanf("%d",&arr[i]);

    }

    //포인터값 할당
    int *start = &arr[0];
    int *end = &arr[len-1];

    
    find_value(start,end,arr);

    //동적 할당 헤제
    free(arr);

}