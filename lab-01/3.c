//3.	Write a program in C to  call a function func_fibonacci(int n)
 to print Fibonacci series .


#include<stdio.h>
void fibonacci_Series(int range)
{     int a=0, b=1, c;
while (a<=range)
{    printf("%d\t", a);
c = a+b;
a = b;
b = c;     }}
int main()
{   int range;
printf("Enter range: ");
scanf("%d", &range);
printf("The fibonacci series is: \n");
fibonacci_Series(range);
return 0;  }
