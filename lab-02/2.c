//2.Write a program in C to Copy all elements of an 
array into Another array in reverse order.

#include<stdio.h>
void func(int copy[],int paste[],int n);
void main()
{
        int i,n,a[100],b[100];
printf("Name = BHAVESH KRISHAN GARG\n");
printf("Roll No = 2K20CSUN01019\n");
printf("Enter number of elements : ");
scanf("%d",&n);
        for(i=0;i<n;i++)
        {
printf("Enter element %d: ",i+1);
scanf("%d",&a[i]);
        }
func(a,b,n);
}
void func(int copy[],int paste[],int n)
{
        int i,j=n-1;
        for(i=0;i<n;i++)
        {
                paste[i]=copy[j];
                j--;
        }
printf("Array with reversed element : \n");
        for(i=0;i<n;i++)
        {
printf("%d ",paste[i]);
        }
}
