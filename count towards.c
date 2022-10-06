#include<stdio.h>
int main()
{
    int a, b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",fun(a,b,c));
}
int fun(int a, int b,int c)
{
    if(a==b&&b==c&&c==a)
    {
        return 0;
    }
    else if(a==b||b==c||c==a)
    {
      if(a==b)
        return c;
      else if(b==c)
        return a;
       else
        return b;
      }
    else
    {

    int    sum=a+b+c;
    return sum;
    }
}
