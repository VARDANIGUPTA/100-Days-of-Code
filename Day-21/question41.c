//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() 
{
    int num, og, f, l, place = 1, res;
    printf("Enter a number: \n");
    scanf("%d", &num);
    og= num;
    l = num % 10;
    f = num;
    while (f >= 10) 
    {
        f/= 10;
        place *= 10;
    }
    res = num - (f * place + l);
    res = res + (l * place) + f;
    printf("After swap: %d\n", res);
    return 0;
}