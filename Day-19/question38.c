//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main()
{
    int num, sum = 0, temp;
    printf("Enter a number: \n");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits is: %d\n", sum);
    return 0;
}