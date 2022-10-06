#include<stdio.h>

struct node
{

    int data;
    struct node *next;

};
void print(struct node *head)
{
    printf("f");
    while(head)
    {
        printf("%d",head->data);
        head=head->next;
    }
