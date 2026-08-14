//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
    int sec, hr, min, rem;
    printf("Enter time in seconds: \n");
    scanf("%d", &sec);
    hr = sec / 3600;
    rem = sec % 3600;
    min = rem / 60;
    rem = rem % 60;
   printf("%d:%d:%d\n", hr, min, rem);
    return 0;
}