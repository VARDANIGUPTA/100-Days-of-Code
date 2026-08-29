//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:    
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    int num, prod = 1, odd = 0, temp;
    printf("Enter a number: \n");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        int dig = temp % 10;
        if (dig % 2 != 0)
        {
            prod *= dig;
            odd = 1;
        }
        temp /= 10;
    }
    if (odd)
    {
        printf("Product of odd digits = %d", prod);
    }
    else
    {
        printf("Product of odd digits = 1");
    }
    return 0;
}