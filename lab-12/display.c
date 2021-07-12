//display function

                void display()
                {
                int i=f;
                if(f==-1 && r==-1)
                {
                printf("\nQueue is Empty\n");
                        }
                        else
                {
                printf("\nThe Queue elements :");
                while(i<=r)
                        {
                printf("\t%d",queue[i]);
                        i=(i+1)%n;
                                        }
                        }
                }
