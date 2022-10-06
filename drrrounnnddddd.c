#include<stdio.h>
main()
{
    int a,k;
    scanf("%d",&a);
    fun(a,k);
    printf("%d",fun(a,k));
    FILE * fp;
    fp=fopen("funcarray.txt","w");
    fprintf(fp,"%d",fun(a,k));

}
int fun(int a,int k)
{
    k=a%10;
    if(k<5)
    {
        k=a-k;
    }
    else if(k>5)
    {
        k=10-k;
        k=a+k;
    }
    return k;
}
