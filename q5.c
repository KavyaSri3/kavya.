#include<stdio.h>
int main()
{
    int x,k;
    printf("Enter byte in hexa: ");
    scanf("%x",&x);
    printf("Enter position : ");
    scanf("%d",&k);
    printf("0x%x",filp(x,k));
}
int filp(int n,int k)
{
    return (n^(1<<(k-1)));
}
