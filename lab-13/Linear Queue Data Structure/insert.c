//insert function

void insert()
{
    struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the Newnode in queue : ");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(front==0 && rear==-0)
    {
        front=rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
