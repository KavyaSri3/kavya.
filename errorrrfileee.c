#include<stdio.h>
int main()
{
    FILE * fp=NULL;
    fp=fopen("","w");
     if(fp==NULL)
        {
         printf("error");
     }
     int t=10;
    fprintf(fp,"%d",t);
    fclose(fp);

}
