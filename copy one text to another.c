#include<stdio.h>

int display()
{
    FILE * fp;
    fp=fopen("copysetbit.txt","r+");
//    fp=fopen("setbit.txt","r");
//    fp1=fopen("q3.txt","w");
    char c[100];
    if(fp!=NULL)
    {
        while(!feof(fp))
        {
      fgets(c,100,fp);
     fprintf(fp,"%s",c);
     return fp;

        }
        fclose(fp);
    }
    else
            printf("ERROR");


}
