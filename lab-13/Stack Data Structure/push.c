//insert function push()


void push()
{
    struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the data in stack : ");
scanf("%d",&newnode->data);
newnode->next=top;
    top=newnode;
}
