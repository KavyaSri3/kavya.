#include<stdio.h>
int main()
{
    int a=1;
    char b[]="SK";
    char c[]="TA10P";
    char d='Z';
    char e='Y';
    //char f;
    int g=100000;

for(int i=g;i<100020;i++)
{
    printf("%d%s%s%c%cE%d\n",a,b,c,d,e,i);
}
for(int i=100020;i<100040;i++)
{
    printf("%d%s%s%c%cH%d\n",a,b,c,d,e,i);
}
for(int i=100040;i<100060;i++)
{
    printf("%d%s%s%c%cP%d\n",a,b,c,d,e,i);
}
}
