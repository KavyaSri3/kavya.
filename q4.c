
#include<stdio.h>
int clrbit(int n,int k)
{
    n=n&(~(1<<(k-1)));
    n=n&(~(1<<(k-2)));
    n=n&(~(1<<(k-3)));
    n=n&(~(1<<(k-4)));
    return n;
}

int main()
{
    int n=0x07,k=4;
    printf("0x%x\n",clrbit(n,k));

}
