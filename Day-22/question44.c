//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main()
{
    int n, c=1;
    float i=3, sum = 1;
    printf("Enter number of terms: \n");
    scanf("%d", &n);
    while(c<n)
    {
        sum += (i/(i+1));
        i += 2;
        c++;
    }
    printf("Approximate Sum = %.1f", sum);
    return 0;
}