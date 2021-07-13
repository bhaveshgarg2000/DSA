//display fuction


void display()
{
    struct node *ptr;
ptr=top;
    if(top==NULL)
    {
printf("List empty\n");
    }
    else
    {
        while(ptr!=NULL)
        {
printf("The elements are : ");
printf("%d\n",ptr->data);
ptr=ptr->next;
    }    }   }
