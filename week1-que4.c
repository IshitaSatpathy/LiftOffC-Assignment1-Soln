#include <stdio.h>
int main()
{
    float phy,chem,bio,maths,comp;
    float per;
    printf("Enter the marks of physics:");
    scanf("%f",&phy);
    printf("Enter the marks of chemistry:");
    scanf("%f", &chem);
    printf("Enter the marks of biology:");
    scanf("%f", &bio);
    printf("Enter the marks of maths:");
    scanf("%f", &maths);
    printf("Enter the marks of computer:");
    scanf("%f", &comp);
    per= ((phy+maths+chem+bio+comp)*100)/500;
    printf("Percentage= %f",per);
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
