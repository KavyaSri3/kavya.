#include<stdio.h>

    {
        scanf("%d",(ptr+i));
    }
        for(int i=0;i<7;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    ptr1= (int*)realloc(ptr,7);
    for(int i=5;i<7;i++)
    {
        scanf("\n%d",(ptr+i));
    }
    for(int i=0;i<7;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}
