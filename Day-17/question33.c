//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, rem, res = 0, dig = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        temp /= 10;
        dig++;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        res += pow(rem, dig);
        temp /= 10;
    }
    if (res == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}