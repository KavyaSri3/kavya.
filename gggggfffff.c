#include<stdio.h>
int main()
{
    FILE * fp;
    fp=fopen("C:/Users/admin/Desktop/New folder/q3.txt","r");
    char c[100];
    while(!feof(fp))
    {
          fgets(c,100,fp);
        printf("%s",c);

    }
  fclose(fp);

}

