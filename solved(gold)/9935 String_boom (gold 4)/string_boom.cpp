#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;
element arr[1000001];
element check_string[1000001];

typedef struct Stack
{
    int point;
    
}Stack;
void start(Stack *p)
{
    p->point =-1;
}
void put(Stack *p,int num)
{
    arr[++p->point] = num;
}
char pop(Stack *p)
{
    return arr[p->point--];
}
bool check_pop(Stack *p,char len[])
{
    int lneght_len = sizeof(len)/sizeof(int);
    int arr_len = sizeof(arr)/sizeof(int);
    int check_index =0;
    for (int i =0;i<arr_len;i++)
    {
        if (arr[i] == len[check_index])
        {
            if (check_index != arr_len-1)
            {
                check_index++;
            }
            else
            {
                while(check_index == 0)
                {
                    pop(p);
                    check_index--,i--;
                }
                return false;
            }
        }

    }
    return true;

}
int main()
{
    Stack stack;

    scanf("%s",&arr);
    scanf("%s",&check_string);

    while(1)
    {
        if (check_pop(&stack, check_string) == true)
        {
            break;
        }
    }
    while(arr)
    {
        printf("%c",pop(&stack)); 
    }
    




}