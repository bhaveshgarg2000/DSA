//4.Write a program in C that will defined function 
void insert(int a[], int value, int position),to  insert a value at 
specific position in an array a, given by the user . 
Assume that the array is large enough to add the new value.


#include <stdio.h>
void insert(int a[], int value, int position);
void main()
{
        int i, n, a[10], val, pos, index, temp;
printf("Name = BHAVESH KRISHAN GARG\n");
printf("Roll No = 2K20CSUN01019\n");
printf("Enter number of elements : ");
scanf("%d", &n);
        for (i = 0; i< n; i++)
        {
printf("Enter element %d :", i + 1);
scanf("%d", &a[i]);
        }
printf("Enter a value to insert : ");
scanf("%d", &val);
printf("Enter desired position : ");
scanf("%d", &pos);
insert(a, val, pos);
printf("Array with inserted element : ");
        for (i = 0; i< n + 1; i++)
        {
printf("%d ", a[i]);
        }
}
void insert(int a[], int value, int position)
{
        int i, n;
        n = sizeof a;
        for (i = n - 1; i>= position - 1; i--)
        {
a[i + 1] = a[i];
        }
a[position - 1] = value;
}
