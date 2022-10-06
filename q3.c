#include<stdio.h>
unsigned long int swap(unsigned long int x)
{
    printf("%d\n",x);
    unsigned  int ev=x&0xAAAAAAAA;
    unsigned  int od=x&0x55555555;
    ev>>=1;
    //printf("%d\n",ev>>=1);
    od<<=1;
   //printf("%d\n",od<<=1);
    return (ev|od);
}
int main()
{
    unsigned long int x;
    scanf("%d",&x);
    printf("%u",swap(x));
}
