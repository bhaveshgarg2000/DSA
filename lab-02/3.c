//3.Write a program in C to find the largest element in  an array using function.

#include<stdio.h>
int max(int m[],int p);
int main()
{
int arr[10],n,i;
printf("Name = BHAVESH KRISHAN GARG\n");
printf("Roll no = 2k20CSUN01019\n");
printf("Enter a number of elements = ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter elements %d : ",i+1);
scanf("%d",&arr[i]);
}
printf("\nMaximum number is %d",max(arr,n));
}
int max(int m[],int p)
{
int i,max=m[0];
for(i=0;i<p;i++)
{
         if(m[i]>max)
         max=m[i];
                            }
        return max;
  }
