#include<stdio.h>
void main()
{
    int a=20,b=40,X;
    X = ++a - --b + a-- - b++;
    printf("%d\n%d\n%d",X,a,b);
}
