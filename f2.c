#include<stdio.h>
#include"f1.c"
int display()
{
    extern int x;
    x++;
    printf("%d\n",x);
return x;

}
