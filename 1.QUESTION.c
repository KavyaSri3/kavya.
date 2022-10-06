#include<stdio.h>
int* fun(int[],int[]);
main()
{
    int *p;
    int a[10]={0,1,0,1,1,1}, b[10]={0,0,0,1,1,0};
    p=fun(a,b);
    printf("%d\n",*p);
    if(a==0)
    {
   printf("a message won and b message lost");
    }
    else printf("a message lost and b message won");


}
int* fun(int a[], int b[])
{
    for(int i=0;i<10;i++)
    {
           if(a[i]==0&&b[i]==0)
            {
            continue;
            }
            else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==0))
            {
             return b;
            }
            else return a;
    }
}
