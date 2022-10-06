#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
   // struct node*ptr;
    //struct node* nk;
};
void main()
{
    int data;
    struct node* h;
    struct node* p;
    struct node* nk;
    h=(struct node*)malloc(sizeof(struct node));
    p=(struct node*)malloc(sizeof(struct node));
    h->data=10;
    h->link=p;
    p->data=20;
    p->link=NULL;
    printf("%d\n%d\n%d\n%d\n",h->data,h->link,p->data,p->link);
    nk=(struct node*)malloc(sizeof(struct node));
    nk->data=30;
    nk->link=NULL;
    fun(nk,data);
    printf("%d\n%d",fun(nk,data));
}
int fun(struct node* nk,int data)
{
    struct node* p;
    p->link=nk;
    return nk;
}
