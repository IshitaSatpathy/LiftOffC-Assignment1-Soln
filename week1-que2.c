#include <stdio.h>
int main()
{
    float cel, far;
    printf("Enter the temperature in celsius that has to be converted into fahrenheit:");
    scanf("%f", &cel);
    far= (cel*1.8)+32;
    printf("%.2f Celsius= %.2f Fahrenheit", cel, far);
    return 0;

}