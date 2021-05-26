//5.Write a program in C that will defined function void delete(int a[], int position),
to  delete a value from specific position in an array a, given by the user.
Void readarray(int a[],int n);
#include<stdio.h>
Void main()
{
 int a[20];
readarray(a,20);
printarray(a,20);
}
 Void readarray(int array[],int size)
{
 Int i=0;
For(i=0;i<size;i++)
{
Scanf(“%d”,&array[i]);
}

#include <stdio.h>
void readarray(int a[], int n);
void main()
{
        int i, n, a[10], pos, index, temp;
printf("Name = BHAVESH KRISHAN GARG\n");
printf("Roll No = 2K20CSUN01019\n");
printf("Enter number of elements : ");
scanf("%d", &n);
        for (i = 0; i< n; i++)
        {
printf("Enter element %d :", i + 1);
scanf("%d", &a[i]);
        }
printf("Enter desired position to remove element : ");
scanf("%d", &pos);
printf("Array after removing the element : ");
readarray(a, pos);
        for (i = 0; i< n - 1; i++)
        {
printf("%d ", a[i]);
        }
}
void readarray(int a[], int position)
{         int i, n, index = position - 1;
        n = sizeof a;
        for (int i = index; i< n - 1; i++)
        {
                a[i] = a[i + 1];
        }
}


