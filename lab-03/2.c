//2.Write a program in C that takes the size of two matrices and elements of
 two matrices  from the user and print the addition of 
two matrices in third matrix.

#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
     printf("Name = BHAVESH KRISHAN GARG\n");
     printf("Roll No = 2K20CSUN01019\n");
     printf("enter the number of row and columns of first  matrices");
     scanf("%d %d",&m,&n);
     printf("enter the number of row and columns of second  matrices");
     scanf("%d %d",&p,&q);
     if((m==p) &&(n==q))
     {
        printf("addition is possible\n");
    printf("enter the elements of first matrices");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrices");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The addition of matrices are");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]= a[i][j]+b[i][j];
        }
    }
         printf(" the elements of resultant matrices are \n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",c[i][j]);
        }
        printf("\n");
    }
}
else
{
    printf("addition not possible");
}
    return 0;
}
