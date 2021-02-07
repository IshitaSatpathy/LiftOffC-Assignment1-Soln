#include <stdio.h>
int main()
{
    int num1,num2,sum,mul,div,min;
    printf("Enter two numbers:");
    scanf("%d %d", &num1,&num2);
    sum= num1+num2;
    mul= num1*num2;
    div= num1/num2;
    min= num1-num2;
    printf("%d + %d = %d", num1, num2, sum);
    printf("%d - %d = %d", num1, num2, min);
    printf("%d x %d = %d", num1, num2, mul);
    printf("%d / %d = %d", num1, num2, div);
    return 0;
}

