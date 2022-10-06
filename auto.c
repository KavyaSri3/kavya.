#include<stdio.h>

void main()
{

    extern int a;
    printf("%d",fun());

}
int fun()
{
    int a=3;
return a;
}
