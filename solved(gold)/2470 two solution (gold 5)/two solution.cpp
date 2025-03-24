#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable : 4996)

// 정적 할당
int ch_arr[100001] = {0};
void merge(int arr[],int start,int end,int mid)
{
    int index = start;
    int r_start = mid+1;
    int l_start = start;
    while(l_start <= mid && r_start <= end)
    {
        // 왼쪽값이 오른쪽 값보다 더 큼
        if (arr[l_start] > arr[r_start])
        {
            ch_arr[start++] = arr[r_start++];
        }
        else if (arr[l_start] <= arr[r_start])
        {
            ch_arr[start++] = arr[l_start++];
        }
    }

    while (l_start <= mid)
    {
        ch_arr[start++] = arr[l_start++];
    }
    while (r_start <= end)
    {
        ch_arr[start++] = arr[r_start++]; 
    }
    // error 1
    for (int i = index;i<=end;i++)
    {
        arr[i] = ch_arr[i];
    }

}
void merge_sort(int arr[],int start, int end)
{    
    int mid = (start+end)/2;

    if (start < end)
    {

        // 양쪽으로 나누어 정렬
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,end,mid);

    }

}

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

        //합이 0보다 클때 end값 --
        else if(sum > 0)
        {
            end--;
        }
        //합이 0보다 작을때 start값 ++
        else if(sum < 0)
        {
            start++;
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

    // 정렬을 위한 병합 정렬 실행
    merge_sort(arr,0,len-1);


    //포인터값 할당
    int *start = &arr[0];
    int *end = &arr[len-1];

    // 투 포인터 알고리즘 수행
    find_value(start,end,arr);

    //동적 할당 헤제
    free(arr);
}