//delete()

void delete()
{
                if (front == - 1 || front > rear)
                {
                printf("Queue Underflow \n");
                return ;
                }
                else
                {
        printf("\nElement deleted from Queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
}
