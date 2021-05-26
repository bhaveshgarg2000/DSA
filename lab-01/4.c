//4.	Write a program in C to  call a function func_palindrome (int n) to 
check whether a number is palindrome or not.



#include<stdio.h>
void main()
{     int number;
printf("Enter the number: ");
scanf("%d", &number);
if(check_Palindrome(number) == 0)
printf("%d is a palindrome number.\n",number);
else
printf("%d is not a palindrome number.\n",number);   }
int check_Palindrome(int number)
{         int temp, remainder, rev=0;
temp = number;
while( number!=0 )
{     remainder = number % 10;
rev = rev*10 + remainder;
number /= 10;    }
if ( rev == temp ) return 0;
else return 1;   }
