
#include<stdio.h>
int clrbit(int n,int k)
{
    n=n|(1<<(k-1));
    n=n|(1<<(k-2));

    n=n|(1<<(k-5));
    return n;
}

int main()
{
    int n=0x06,k=8;
    printf("0x%x\n",clrbit(n,k));

}

