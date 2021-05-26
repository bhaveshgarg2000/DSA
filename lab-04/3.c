//3.Write a program in C that takes the size of an array and elements of array 
from the user and sort the array using Insertion Sort.

#include<stdio.h>
void main()
{
        int i, j, n, temp, arr[25];
        printf("Name = BHAVESH KRISHAN GARG\n");
        printf("Roll No = 2K20CSUN01019\n");
        printf("Enter the no of elements = ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
{
        printf("Enter elements %d : ",i+1);
        scanf("%d",&arr[i]);
}
   // Implementation of insertion sort algorithm//
        for(i=1;i<n;i++)
        {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j>=0))
        {
        arr[j+1]=arr[j];
        j=j-1;
        }
        arr[j+1]=temp;
        }
        printf("Sorted array elements: ");
        for(i=0;i<n;i++)
        printf(" %d",arr[i]);
}
