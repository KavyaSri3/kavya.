#include<stdio.h>
int function(int, int []);
int i;
int main()
{
    int x;
    printf("Enter the number of messages:");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

//    for(i=0;i<x;i++)
//    {
//        printf("%d\n",a[i]);
//    }

    printf("%d",function(x,a));
}
int function(int x,int a[])
{
    int j;
    for(i=0;i<1;i++)
    {
        for(j=0;i<8;i++)
        {
            if(a[i]==a[i+1] && a[i]==a[i+2])
            {
                return *a;
            }
            else if(a[i]==1 && a[i+1]==1 && a[i+2]==0)
            {
                return a[i+2];
            }
            else if(a[i]==0 && a[i+1]==1 && a[i+2]==1)
            {
                return a[i];
            }
            else if(a[i]==1 && a[i+1]==0 && a[i+2]==1)
            {
                return a[i+1];
            }
            else
                {
                    return a;
                }
        }
    }
}
