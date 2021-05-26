//main function of stack

#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int choice,n,stack[10],val;
int top=-1;
int main()
{
     printf("Enter the size of stack = ");
    scanf("%d",&n);
    while(1)
    {
        printf("\n*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*\n");
                printf("\n 1.Push\n");
                printf("\n 2.Pop\n");
                printf("\n 3.Display\n");
                printf("\n 4.Exit\n");
                printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
        printf("Enter the choice = ");
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

            default:
            printf("Enter any other choice");
        }
    }
}
