#include <stdio.h>
#include <stdlib.h>
int main()
{
    //총 3가지 
    //1. 낮을때,
    //2. 높을때.
    //3. 같을때의 조건 +

    // 만약 start가 end 값을 넘는 상황에서의 예외처리
    // end가 끝에 다다를때
    // 스타트가 


    /*

    1. 값과 배열을 입력받는다.

    2. 투포인터 알고리즘을 이용하여 최소의 길이를 얻는다, 최소의 길이는 end -start로 얻는다.
    - 만약 start가 end값을 넘는 상황에서의 예외처리를 해주자.
    - 추가로 입력과 동시에 처리하자, 배열에 값을 넣는 순간 메모리 초과가 일어날 수 있기에 부분 합 알고리즘을 활용.


    3. 만약 end가 다 되었으면 함수를 종료후 나머지 start를 end까지 옮긴다.

    4.이과정들을 통해서 얻은 r값을 출력한다.
    */


    //선언
    int num,target;
    int a;
    int *number;
    int start =0,end =1,len = 0;

    //입력
    scanf("%d %d",&num,&target);

    number = (int*)malloc((num+1)*sizeof(int));//기존 할당보다 +1
    number[0] = 0;
    for (int i = 1;i<=num;i++)
    {
        scanf("%d",&a);
        number[i] = number[i-1]+a;
    }

    while(end<=num)
    {
        // 합이 타겟보다 작은지
        if (number[end] - number[start] < target)
        {
            end++;
            continue;
        }

        if ((end - start) < len || len == 0)
        {
            len = end-start;

        }

        // 합이 타겟보다 큰지
        if (number[end] - number[start] > target)
        {
            if (start == (end-1))
            {
                start++;end++;
            }
            else
            {
                start++;
            }
        }
        // 합이 타겟이랑 같은지
        else if(number[end] - number[start] == target)
        {
            end++;start++;
        }

    }
    printf("%d",len);

    free(number);
    return 0;
}
    

