//1.Write a program in C to create a singly linked list and traverse(print) 
the info of all the three nodes given by the user.


#include<stdlib.h>
#include <stdio.h>
void create();
void display();
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()
{
        int choice;
                printf("NAME = BHAVESH KRISHAN GARG\n");
                printf("ROLL NO = 2K20CSUN01019\n");
                while(1){
                printf("\n*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*\n");
                printf("\n 1.Create\n");
                printf("\n 2.Display\n");
                printf("\n 3.Exit\n");
                printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                printf("Enter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        exit(0);
                                        break;

                        default:
                                        printf("\nWrong Choice");
                                        break;
                }
        }
        return 0;
}
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
        printf("\nEnter the data value for the node : ");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
