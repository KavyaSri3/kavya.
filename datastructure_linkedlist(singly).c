#include<stdio.h>
//oid main()

struct node
{

    int data;
    struct node *link;

};
int main()
{
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    printf("%d\n",head->data);

    struct node *current=NULL;
    current=(struct node *)malloc(sizeof(struct node));

    current->data=100;
    current->link=NULL;
    head->link=current;
printf("%d\n",current->data);
    current=(struct node *)malloc(sizeof(struct node));

    current->data=50;
    current->link=NULL;
    head->link->link=current;
    //head->link=current;



    //printf("%d\n",current->data);
    printf("%d\n",current->data);


}
