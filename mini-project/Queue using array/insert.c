//insert() function


void insert()
{
                int add_item;
                if (rear == MAX - 1)
                printf("Queue Overflow \n");
                else
                {
                if (front == - 1)
                front = 0;
                printf("\nInsert the element in queue : ");
                scanf("%d", &add_item);
                rear = rear + 1;
                queue_array[rear] = add_item;
                                }
                }
