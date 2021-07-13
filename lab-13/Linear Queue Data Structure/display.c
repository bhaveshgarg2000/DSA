//display function

void display()
{
    struct node *temp;
    temp=front;
if(front==0 && rear==0)
    {
printf("Queue is Empty\n");
    }
    else
    {
printf("\nThe elements in the Queue : ");
        while(temp->next!=front)
        {
printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
