//display() function




void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty\n");
    else
    {
        printf("\nQueue elements : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
