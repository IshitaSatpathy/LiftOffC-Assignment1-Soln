#include <stdio.h>
int main()
{
    float rad, dia, circ, area;
    printf("Enter the radius:");
    scanf("%f", &rad);
    dia= 2*rad; 
    circ= 2*3.14*rad;
    area= 3.14*rad*rad;
    printf("Diameter of the circle:%.2f",dia);
    printf("Circumference of the circle:%.2f",circ);
    printf("Area of the circle:%.2f",area);
    return 0;
}