//1.Write a program in C to print the matrix after reading from the user.

#include<stdio.h>
int main()
{int a[10][10],i,j,m,n;
printf("Name = BHAvESH KRISHAN GARG\n");
printf("Roll no = 2K20CSUN01019\n");
printf("Enter the no of rows and columns of matrices");
scanf("%d %d",&m,&n);
printf("Enter the element in matrices");
for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
              {
                 scanf("%d",&a[i][j]);
         }
  }
printf("The element in matrices are \n");
for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
              {
                 printf("\t %d",a[i][j]);
         }
                 printf("\n");
     }
        return 0;
}
