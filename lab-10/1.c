//1.	Make a Menu driven  program to implement following functions  to access and traverse a Stack Data Structure.(Using Static Memory Allocation)
Print the following details in advance for user information.
Press : 1 for push an element in stack.
Press : 2 for pop an element in Stack.
Press : 3- for printing all the element present  in Stack.
Press  : 4- for exit();


#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int choice,n,stack[10],val;
int top=-1;
int main()
{
                printf("\nNAME = BHAVESH KRISHAN GARG\n");
                 printf("\nROLL NO = 2K20CSUN01019\n");
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

void push()
{
    if(top>=n-1)
    {
        printf("Overflow\n");
    }
    else{
    printf("Enter the value to be pushed in a stack = ");
    scanf("%d",&val);
    top++;
    stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else{
    printf("\nThe deleted element in the stack is :%d",stack[top]);
    top--;
    }
}

void display()
{
    int i;
    printf("\nThe elements present in stack are : ");
    for(i=top;i>=0;--i)
    printf("%d\t\t",stack[i]);
}
