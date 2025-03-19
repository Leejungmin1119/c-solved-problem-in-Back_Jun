#include <stdio.h>
#pragma warning (disable:4996)


int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    num1 = num1/2;
    if (num1 >= num2)
    {
        printf("%d",num2);
    }
   else
    {
        printf("%d",num1);
    }
    
}