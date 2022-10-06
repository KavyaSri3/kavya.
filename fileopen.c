#include<stdio.h>
int main()
{
    FILE * fp;
    fp=fopen("C:/Users/admin/Desktop/New folder/setbit.txt","r");
    char c[8]={'1','2','a','565555555','*'};
    float s=43;
    int a=10;
    char n[20]="kavyaaaaaa";
     char g[20]="nihhhaa";

    getc(fp,"The string is: %s\nthe float is: %f\n%d\n%s\n%s",c,s,a,n,g);
    fclose(fp);
}
