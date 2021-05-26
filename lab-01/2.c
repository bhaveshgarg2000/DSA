//2.	Write a program in C to call a fuction func_greatest(int a,int b,int c) 
to find the greatest number among three number given by user.



#include <stdio.h>
#include <stdlib.h>
int biggestNumber(int,int,int);
void main()
{   int a,b,c;
printf("Enter the three numbers\n");
scanf("%d%d%d",&a,&b,&c);
int result=biggestNumber(a,b,c);//function call
printf("Biggest number is: %d\n",result);    }
int biggestNumber(int a,int b,int c)
{    if(a>b)
{    if(a>c)
return a;
else
return c;    }
else
{    if(b>c)
return b;
else
return c;   }}
