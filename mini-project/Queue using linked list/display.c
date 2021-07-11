//display() function


void display()
{
    struct node *ptr;
    ptr = front;
    if(front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {   printf("\n QUEUE elements : ");
        while(ptr != NULL)
        {
            printf("%d\t",ptr -> data);
            ptr = ptr -> next;
         }
    }
}
