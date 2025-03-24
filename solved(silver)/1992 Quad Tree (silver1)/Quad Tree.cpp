#include <stdio.h>
#pragma warning (disable : 4996)

int arr[64][64];
/*

 작업 순서는 왼쪽 위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래 순 

 2. 만약 모든 면이 같은 색의 면이면 수를 출력하고 리턴하기 


 3. 같은색이 아니면 재귀함수 실행 총 4분면으로 나누어서 재귀함수를 실행하며 들어갈때는 괄호을 넣어주기
    3.1 재귀함수를 실행하기 전 괄호 출력, 똑같은 방식으로 나갈때도 닫는 괄호 출력,
    3.2 재귀함수를 들어갈때, 시작 좌표와 탐색할 사각형의 크기를 넣어준다

*/
int Quad_Tree(int len,int y,int x)
{
    bool ch = true;
    int check = arr[y][x];

    //check len == 1;
    if (len == 1)
    {
        return printf("%d",check);
        
    }
    // if len !=1, checking arr is equals.
    for (int i = y;i<y+len;i++)
    {
        for (int j = x;j<len+x;j++)
        {
            if (check != arr[i][j])
            {   
                ch = false;
                break;
            }
        }

        if (ch == false)
        {
            break;
        }
    }
    if (ch == false)
    {
        printf("(");
        len = len/2;
        Quad_Tree(len,y,x);
        Quad_Tree(len,y,x+len);
        Quad_Tree(len,y+len,x);
        Quad_Tree(len,y+len,x+len);
        printf(")");
        return 0;
    }
    else
    {
        return printf("%d",check);
    }
    

}

int main()
{
    int n;

    scanf("%d",&n);

    for (int i = 0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            scanf("%1d",&arr[i][j]);
        }

    }
    Quad_Tree(n,0,0);
}
