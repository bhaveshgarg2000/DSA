//delete function

                        void delete()
                        {
                        if(f==-1 && r==-1)
                        {
                        printf("\nQueue is Empty\n");
                                }
                        else if(f==r)
                        {
                        f=r=-1;
                                }
                        else
                        {
                        printf("\nThe deleted element from the queue is: %d",queue[f]);
                        f=(f+1)%n;
                        }
                                }
