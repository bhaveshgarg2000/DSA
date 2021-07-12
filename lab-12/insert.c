//insert() function

  void insert()
                {
                int data;
                printf("\nEnter the data in queue : ");
                scanf("%d",&data);
                if(f==-1 && r==-1)
                {
                f=r=0;
                queue[r]=data;
                                }
                else if(((r+1)%n)==f)
                {
                printf("full\n");
                                }
                        else
                        {
                        r=(r+1)%n;
                        queue[r]=data;
                                        }
                                }
