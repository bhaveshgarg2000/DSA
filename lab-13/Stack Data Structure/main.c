//driver code


#include<stdio.h>
#include<stdlib.h>
void push();
void display();
void pop();
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
int main()
{
    int choice;
printf("\n NAME = BHAVESH KRISHAN GARG\n");
printf("\n ROLL NO 2K20CSUN01019\n");
while(1)
    {
printf("\n***********************MENU************************\n");
printf("\n====================================================\n");
printf("\n 1.Insert element in Stack\n");
printf("\n 2.Delete an element from Stack\n");
printf("\n 3.Print all element from Stack\n");
printf("\n 4.Exit\n");
printf("\n=======================================================\n");
printf("\nEnter the choice : ");
scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;


        case 3:
        display();
        break;

        case 4:
        exit(0);
        break;

default :printf("Enter Correct Choice\n");
                                }
                        }
                }
