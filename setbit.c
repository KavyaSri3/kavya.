#include<stdio.h>
int setbit(int n,int k)
{
    return(n|(1<<(k-1)));
}

void po(int n, int k)
{
    int r;
    r=(n>>k-1);
    if(r&1)
        printf("bit is set\n");
    else
        printf("bit is clear");
}
int main()
{
    int n=0xF3,k=4;
    printf("0x%x\n",setbit(n,k));
    po(0xF3,8);
}
