#include<stdio.h>

int sum_of_digit(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sum_of_digit(n / 10)); 
} 

void main() 
{ 
    int n;
    printf("Enter A Number:");   //Ask User for Number
    scanf("%d",&n);
    int result = sum_of_digit(n); 
    printf("The sum of digits in %d is %d\n", n, result);
} 
