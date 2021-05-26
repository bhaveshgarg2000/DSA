//main function


#include<stdlib.h>
#include <stdio.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;




int main()     
{
        int choice;
        while(1){
                printf("\n*-*-*-*-*-*-*-*-*-*-*-*-**MENU\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**n");
                printf("\n1.Create\n");
                printf("\n 2.Display\n");
                printf("\n 3.Insert at the beginning\n");
                printf("\n 4.Insert at the end\n");
                printf("\n 5.Insert at specified position\n");
                printf("\n 6.Delete from beginning\n");
                printf("\n 7.Delete from the end\n");
                printf("\n 8.Delete from specified position\n");
                printf("\n9.Exit\n");
                printf("\n*-*-*-*-*-*-*-*-*-*–*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
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
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;

                        case 9:
                                        exit(0);
                                        break;

                        default:
                                        printf("\nWrong Choice");
                                        break;
                }
        }
        return 0;
}
