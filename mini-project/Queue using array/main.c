
//main driver code


#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void main()
{
    int choice;
        printf("\nNAME = BHAVESH KRISHAN GARG\n");
        printf("\nROLL NO = 2K20CSUN01019\n");
    while (1)
    {
    printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*\n");
        printf("\n1.Insert element to queue\n");
        printf("\n2.Delete element from queue\n");
        printf("\n3.Display all elements of queue\n");
        printf("\n4.Exit\n");
printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
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
                printf("Wrong choice\n");
                                }
                        }
}
