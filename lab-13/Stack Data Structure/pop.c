//pop function

void pop()
{
    struct node *ptr;
ptr=top;
printf("The poped element is %d",top->data);
    top=top->next;
    free(ptr);
}
