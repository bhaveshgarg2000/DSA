//1.Write a program in C to call two functions func_iter(int n) ,func_rec(int n) ,
   to print the factorial of a number using iteration and recursion respectively.

#include<stdio.h>
int fact_iter(int n){
int i,res=1;
        for(i=1;i<=n;i++){
                res=i*res;    }
        return res;     }
int fact_rec(int n){
        if(n==1){
                return 1;     }
        else{
                return (n*fact_rec(n-1));      }       }
void main(){
        int num;
        printf("Enter the number = ");
        scanf("%d",&num);
        printf("Factorial by iteration = %d \n",fact_iter(num));
        printf("Factorial by recurtion = %d \n",fact_rec(num));       }

