//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main()
{
    long long num;
    int counts[10] = {0};
    if (scanf("%lld", &num) != 1)
    {
        return 1;
    }
    if (num < 0)
    {
        num = -num;
    }
    if (num == 0)
    {
        counts[0] = 1;
    }
    else
    {
        while (num > 0)
        {
            counts[num % 10]++;
            num /= 10;
        }
    }
    int max_digit = 0;
    int max_count = counts[0];
    for (int i = 1; i < 10; i++)
    {
        if (counts[i] > max_count)
        {
            max_count = counts[i];
            max_digit = i;
        }
    }
    printf("Most frequent digit is: %d\n", max_digit);
    return 0;
}
