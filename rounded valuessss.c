#include<stdio.h>
int fun(int, int, int);
int round(int ,int,int);
main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
     printf("%d",fun(a,b,c));
     int z=fun(a,b,c);
     FILE * fp;
     fp=fopen("C:/Users/admin/Desktop/New folder/setbit.txt","w");
     fprintf(fp,"%d",z);
     fclose(fp);

}
int fun(int a, int b, int c)
{
    int sum=rou(a)+rou(b)+rou(c);
    return sum;
}


int rou(int x)
{

    int sum=0,k;
    k=x%10;
    if(k<=5)
    {
        k=x-k;
    }
    else if(k>5)
    {

         int s=10-k;
         k=x+s;
    }

    return k;


}
