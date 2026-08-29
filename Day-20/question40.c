//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() 
{
    char ch;
    int entered_any = 0;
    printf("Enter a binary number: ");
    while ((ch = getchar()) != '\n' && ch != EOF) 
    {
        if (ch != '0' && ch != '1') 
        {
            printf("\nError: Not a valid binary number.\n");
            return 1;
        }
        if (!entered_any) 
        {
            printf("1's complement: ");
            entered_any = 1;
        }
        if (ch == '0') 
        {
            putchar('1');
        } 
        else 
        {
            putchar('0');
        }
    }
    if (!entered_any) 
    {
        printf("Error: No input provided.\n");
    } 
    else 
    {
        printf("\n");
    }
    return 0;
}