//5.Write a program in C that takes the size of an array and elements of array
 from the user and search the element given by user using Binary search. 

#include<stdio.h>
int main()
{
        int n,i,arr[10],search,first,last,mid;
        printf("Name = BHAVESH KRISHAN GARG\n");
        printf("Roll No = 2K20CSUN01019\n");
        printf("Enter the no elements = ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
                        }
        printf("Enter the element to be search : ");
        scanf("%d",&search);
                //binary search algo//
        first=0;
        last=n-1;
        mid=(first+last)/2;
        while(first<=last)
        {
        if(arr[mid]<search)
        first=mid+1;
        else if(arr[mid]==search)
        {
        printf("%d found at location %d",search,mid+1);
        break;
                }
        else
                last=mid-1;
                mid=(first+last)/2;
                                }
                        if(first>last)
                printf("%d not found in the list\n",search);
                                        }
