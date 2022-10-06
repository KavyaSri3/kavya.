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
    printf("\n");
}
void insert_end(struct node **head,int data)
    {
        struct node*new_node=NULL;
        struct node *last=*head;
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data;
        new_node->next=*head;
        if(*head==NULL)
        {
            *head=new_node;
            return ;
        }
            while(last->next)last=last->next;
            last->next=new_node;

        }




int main()
{
    struct node *head;
    int count=0,i,data;
    printf("initial list");
    printf("enter");
    scanf("%d",&data);
    insert_end(&head,data);
}






