#include<stdio.h>
int main()
{
    int a1[]={10,40,50,70,90};
    int a2[]={20,40,50,80,60};
    int a3[]={50,30,90,40,10};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    int n3=sizeof(a3)/sizeof(a3[0]);

    int i,k,j;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            {
                for(k=0;k<n3;k++)
                {
                    if(a1[i]==a3[k])
                        printf("%d ",a1[i]);
                }
            }
        }

    }
}
