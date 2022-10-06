#include<stdio.h>
int main()
{
    int x=10,y=10,z=20,A;
    A= x++ - --y + ++z - --y - ++x;
    printf("%d\n%d\n%d\n%d",x,y,z,A);
}
