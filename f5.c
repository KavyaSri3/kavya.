#include<stdio.h>``````````````````````````````````````````````````````````````````````````````````````````````
int main()
{
    FILE * fp;
      FILE * fp1;
      FILE * fp2;
    fp=fopen("setbit.txt","r");
    fp1=fopen("q3.txt","a");
    fp2=fopen("setbit.txt","w");
    char c[100];
    if(fp!=NULL)
    {

        while(!feof(fp))
        {
      fgets(c,100,fp);
               fprintf(fp1,"%s",c);
        }
        fgets(c,100,fp);
               fprintf(fp2,"%s",c);

        fclose(fp);

    }

    else
            printf("ERROR");
}
