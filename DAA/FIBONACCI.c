AIM:
To implement a program to find the nth fibonacci term using recursion

ALGORITHM:
1.read the vaalue of n
2.if n=0,return 0(base condition)
3.if n=1,return 1(base condition)
4.recursively compute: f(n)=f(n-1)+f(n-2)
5.display the returned value as the nth fibonacci term.
PROGRAM:
#include <stdio.h>

// Function to find nth Fibonacci number using recursion
int fib(int n) 
{ 
    // Base condition: if n is 0 or 1, return n itself
    if (n <= 1) 
    { 
        return n; 
    } 

    // Recursive case: sum of previous two numbers
    return fib(n - 1) + fib(n - 2); 
} 

int main() 
{ 
    int n;

    // Taking input from user
    printf("Enter the value of n: "); 
    scanf("%d", &n); 

    // Check if input is valid (non-negative)
    if (n < 0) 
    { 
        printf("Invalid input\n"); 
        return 1; 
    } 

    // Print nth Fibonacci number
    printf("\nNth Fibonacci term = %d\n", fib(n)); 

    return 0; 
}
