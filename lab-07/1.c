//1.	Write a program to implement following functions to access and 
 traverse a Singly Linked List.
Print the following details in advance for user information.
Press -1 for adding an element at beginning.
Press -2 for display all elements.
Press -3 for adding an element at beginning.
Press -4 for adding an element at end.
Press -5 for deleting an element at beginning.
Press -6 for deleting an element from end.
Press -7 for exit();



#include<stdlib.h>
#include <stdio.h>
void create();
void display();
void insert_begin();
void insert_end();
void delete_begin();
void delete_end();


struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()
{
                printf("NAME = BHAVESH KRISHAN GARG\n");
                printf("ROLL NO = 2K20CSUN01019\n");
        int choice;
        while(1){
                printf("\n*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*\n");
                printf("\n 1.Create\n");
                printf("\n 2.Display\n");
                printf("\n 3.Insert at the beginning\n");
                printf("\n 4.Insert at the end\n");
                printf("\n 5.Delete from beginning\n");
                printf("\n 6.Delete from the end\n");
                printf("\n 7.Exit\n");
                printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-****\n");
                printf("\nEnter your choice : ");
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
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        delete_begin();
                                        break;
                        case 6:
                                        delete_end();
                                        break;
                        case 7:
                                        exit(0);
                                        break;

                        default:
                                        printf("n Wrong Choice:n");
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
                printf("\nOut of Memory Space");
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
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are : ");
                while(ptr!=NULL)
                {
                        printf("%d\t\t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the data value for the node : " );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the data value for the node : " );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}


void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is : %d\t\t",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:%d\t\t",ptr->info);
                free(ptr);
        }
}
