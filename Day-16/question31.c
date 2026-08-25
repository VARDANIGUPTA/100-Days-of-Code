//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main() 
{
    int num, rem;
    long long bin = 0;
    long long place = 1;
    printf("Enter a decimal number: \n");
    scanf("%d", &num);
    if (num < 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    int temp = num;
    while (num > 0) 
    {
        rem = num % 2;
        bin = bin + (rem * place);
        place = place * 10;
        num = num / 2;
    }
    printf("Binary representation of %d is: %lld\n", temp, bin);
    return 0;
}