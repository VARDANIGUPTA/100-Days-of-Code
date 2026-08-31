//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
    int n, f=1, i, temp, rem, sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    temp = n;
    while(temp>0)
    {
        rem = temp % 10;
        for(i=1; i<=rem; i++)
        {
            f *= i;
        }
        sum += f;
        f = 1;
        temp /=10;
    }
    if(sum == n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }
    return 0;
}