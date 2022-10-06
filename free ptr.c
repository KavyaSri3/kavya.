#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void main()
{
    struct node *h=NULL;
    h=(struct node*)malloc(sizeof(struct node));
    h->data=10;
    h->link=NULL;
     struct node *c=NULL;
    c=(struct node*)malloc(sizeof(struct node));
    c->data=20;
    c->link=NULL;
    h->link=c;
    c=(struct node*)malloc(sizeof(struct node));
    c->data=30;
    c->link=NULL;
    h->link->link=c;
     c=(struct node*)malloc(sizeof(struct node));
    c->data=50;
    c->link=NULL;
    h->link->link->link=c;

    c=h;
    while(c->data!=50)
    {
    printf("%d\n%d\n",c->data,c->link);
        c=c->link;

    }
        printf("\n");

   struct node* ptr;
   ptr=h->link->link;
printf("%d\n",ptr->data);
printf("%d\n",c);
 printf("\n");
   h->link->link=c;
   //printf("%d\n",h->link->link);
   c=h;
    while(c!=NULL)
    {
    printf("%d\n%d\n",c->data,c->link);
        c=c->link;
    }
   free(ptr);
//   ptr1=NULL;
}


