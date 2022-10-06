#include<stdio.h>
main()
{
    FILE * fp;
    fp=fopen("C:/Users/admin/Desktop/New folder/q3.txt","w");
    char n;
    scanf("%c",&n);
    fprintf(fp,"%c",n);
    fclose(fp);
}
