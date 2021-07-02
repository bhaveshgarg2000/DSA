#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void peek();
void delete();
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
int main()
{
    int choice;
    while(1)
    {   printf("\n*************************MENU**************************\n");        printf("\n=======================================================\n");
        printf("\n 1.Insert element in Queue\n");
        printf("\n 2.Delete an element from Queue\n");
        printf("\n 3.Print all element from Queue\n");
        printf("\n 4.Exit\n");
printf("\n=======================================================\n");
        printf("\nEnter the choice = ");
        scanf("%d",&choice);
        switch(choice)
        {

                case 1:
                create();
                break;

                case 2:
                delete();
                break;

                case 3:
                display();
                break;

                case 4:
                exit(0);
                break;

                default: printf("\nEnter Other Choice\n");

        }
    }
}
void create()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data in newnode : ");
    scanf("%d",&newnode->data);
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=rear->next;
    }
}
void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("\nQueue Empty\n");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("\nThe elements in queue are : %d",temp->data);
            temp=temp->next;
        }
    }
}
void delete()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("\nQueue Empty\n");
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}
