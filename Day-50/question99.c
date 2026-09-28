//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char date[11];
    printf("Enter the date in dd/04/yyyy format: \n");
    scanf("%s", date);
    char month[4];
    if (strncmp(date + 3, "04", 2) == 0)
    {
        strcpy(month, "Apr");
    }
    printf("Formatted date: \n");
    printf("%.2s-%s-%.4s\n", date, month, date + 6);
    return 0;
}