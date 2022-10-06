#include<stdio.h>
int main()
{
    int *ptr,i,n1,n2,*ptr1;
    printf("enter the size :\n");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*sizeof(int));
    //printf("previous adrress\n");
    for(i=0;i<n1;i++)
    {
             scanf("%d",ptr+i);

    }
     for(i=0;i<n1;i++)
    {
             printf("%d\t",*(ptr+i));

    }

    printf("\nEnter the new size:");
    scanf("%d",&n2);

    ptr1=(int*)realloc(ptr,n2);
    //printf("\nNew adress\n");
     for(i=n1+1;i<=n2;i++)
    {
             scanf("%d\t",ptr+i);

    }
    for(i=0;i<n2;i++)
    {
     printf("%d\t",*(ptr+i));

    }
    free(ptr);
}
