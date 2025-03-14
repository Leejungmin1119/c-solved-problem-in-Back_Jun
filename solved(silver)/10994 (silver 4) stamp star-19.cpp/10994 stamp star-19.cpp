#include <stdio.h>
#pragma warning (disable : 4996)
#include <stdlib.h> // standard library의 약자

/*
(checked book)
*/

// 배열 선언
char arr[400][400];

// 별찍기 함수
void stamp_star(int roop,int max_len,int position)
{
    for(int check =0;check<roop;check++)
    {
        for (int i =position;i<max_len;i++)
        {

            //가로부분
            arr[position][i] = '*';
            arr[max_len-1][i] = '*';
            //세로부분
            arr[i][position] = '*';
            arr[i][max_len-1] = '*';

        }

        //다 끝났으면 다음 사각형을 그리기 위한위치조정
        max_len-=2;
        position +=2;
    }
}

int main() 
{
    int num;
    scanf("%d",&num);

    int len = (4*num) -3;
    
    // 배열에다가 빈칸 집어넣기
    for (int i =0;i<len;i++)
    {
        for (int j =0;j<len;j++)
        {
            arr[i][j] = ' ';
        }

    }

    // 함수 실행
    stamp_star(num,len,0);

    // 출력
    for (int i =0;i<len;i++)
    {
        for (int j =0;j<len;j++)
        {
            printf("%c",arr[i][j]);
        }
        if (i != (len-1))
        {
            printf("\n");
        }

    }
}