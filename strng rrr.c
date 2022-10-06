#include<stdio.h>
int main()
{
    FILE * fp;
    fp=fopen("C:/Users/admin/Desktop/New folder/q3.txt","r");
    char c[10];
    if(fp!=NULL)
    {
        for(int i=0;i<20;i++)
            {
                char ch=fgetc(fp);
        printf("%c",ch);

            }
  fclose(fp);

}

    else
            printf("ERROR");
}

