//1. Write a program in C that takes the size of an array and elements of 
array from the user and sort the array using Bubble Sort.


#include<stdio.h>
void main()
{	
int arr[10],i,j,n,pass,temp;
printf("Name = BHAVESH KRISHAN GARG\n");
printf("Roll No = 2K20CSUN01019\n");
printf("Enter the size of an array = ");
scanf("%d",&n);
printf("Enter array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
// printf("\nProcedure for bubble sort is : ");//
for(pass=1;pass<=n-1;pass++)
{
                for(j=0;j<=n-1-pass;j++)
                {
                 if(arr[j]>arr[j+1])
        {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
}
}
printf("\nThe sorted array is : \n");
for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}
}
