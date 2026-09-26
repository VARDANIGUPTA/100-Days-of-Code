//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp[100];
    printf("Enter a sentence: \n");
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0, k = 0;
    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i] == '\n') 
        {
            temp[j] = '\0';
            for (k = j - 1; k >= 0; k--) 
            {
                printf("%c", temp[k]);
            }
            printf(" ");
            j = 0;
        } 
        else 
        {
            temp[j++] = str[i];
        }
        i++;
    }
    temp[j] = '\0';
    for (k = j - 1; k >= 0; k--) 
    {
        printf("%c", temp[k]);
    }
    printf("\n");
    return 0;
}