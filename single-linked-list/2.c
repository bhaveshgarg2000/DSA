//display or traversing of a node


void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are : ");
                while(ptr!=NULL)
                {
                        printf("%d\t\t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
