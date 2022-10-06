#include<stdio.h>
#define PI 3.14
int main()
{
    float r,area,circomfarence;
    printf("enter the value of r",r);
    scanf("%f",&r);
    area=PI*r*r;
    printf("%f\n",area);
    circomfarence=2*PI*r;
    printf("%.2f",circomfarence);
}
