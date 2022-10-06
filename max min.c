#include<stdio.h>
main()
{
    int n,a[n],i,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(max,min);
    printf("max no. is: %d \nMin no. is: %d",fun(a[n],n));
}
int fun(int a[], int n)
{
   int max=a[n-1];
   int min=a[0],i ;
   max=a[0];
   min=a[0];
   for(i=0;i<n;i++)
   {
   if(max<a[i])
   {
       max=a[i];
   }
   if(min>a[i])
   {
       min=a[i];
   }
}
return min;
   return max;
}
