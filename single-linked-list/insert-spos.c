//insert at specific position

void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(start==NULL)
        {
                printf("\nOut of Memory Space : ");
                return;
        }
        printf("\nEnter the position for the new node to be inserted : ");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node : ");
        scanf("%d",&temp->info) ;
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
