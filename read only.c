#include<stdio.h>
int main()
{
    FILE * fp;
    fp=fopen("setbit.txt","r+");
    char c[100];
    if(fp!=NULL)
    {
     int count=0;
        while(!feof(fp))
        {
      fgets(c,100,fp);
      count++;

        }
        fclose(fp);
printf("number of lines in the file is: %d",count);
    }

    else
            printf("ERROR");
}
