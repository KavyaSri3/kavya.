#include<stdio.h>
//#include"extern.c"

extern int display();
extern int display1();
int x=10;
//#include"f2.c"
void main()
{
   display();
   display1();
  //  printf("%d",x);
}
