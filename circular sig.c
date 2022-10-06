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
    c->link=h;
    printf("%d",c->link);

    while(h!=NULL)
    { printf("%d\n%d\n",c->data,c->link);
        c=c->link;

    }

}
