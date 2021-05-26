//1.Write a program in C to read and print 1D-Array using function.



#include<stdio.h>
int main()
{
int array[10],n;
printf("Name = BHAVESH KRISHAN GARG\n");
printf("Roll No = 2K20CSUN01019\n");
printf("Enter the size of array = ");
scanf("%d",&n);
print(array,n);
}
 int print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Enter a[%d]: ",i);
scanf("%d",&a[i]);
}
printf("\n Printing elements of the array :\n\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
