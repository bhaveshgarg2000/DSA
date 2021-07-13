//delete function


void delete()
{
    struct node *temp;
    temp=front;
if(front==0 && rear==0)
    {
printf("Queue is Empty\n");
    }
    else if(front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else
    {
        front=front->next;
        free(temp);
        rear->next=front;
    }
}
