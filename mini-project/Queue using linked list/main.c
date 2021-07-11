//main driver code

#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void main ()
{
    int choice;
    printf("\nNAME = BHAVESH KRISHAN GARG\n");
    printf("\nROLL NO = 2K20CSUN01019\n");
    while(1)
    {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n=================================================================\n");
        printf("\n1.Insert an element in QUEUE\n");
        printf("\n2.Delete an element from QUEUE\n");
        printf("\n3.Display the QUEUE elements\n");
        printf("\n4.Exit\n");
        printf("\n=================================================================\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                insert();
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
                default:
                printf("\nEnter valid choice??\n");
                                        }
                        }
                }
