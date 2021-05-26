//4.Write a program in C that takes the size of an array and elements of array
 from the user and search the element given by user using sequential search.


#include<stdio.h>
int main()
{
        int n,i,arr[10],search;
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
                //sequential search algo//
        for(i=0;i<n;i++)
        {
        if(arr[i]==search)
                {
                printf("%d is present at location %d\n",search,i+1);
                break;
                                }
}                       if(i==n)
                                printf("%d is not present in the array\n",search);
return 0;
}
