//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main()
{
    int n, i, f = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
       for (i = 1; i <= n; i++)
        {
         f *= i;
        }
       printf("Factorial of %d = %d", n, f);
    }
    return 0;
}