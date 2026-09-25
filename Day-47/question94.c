//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], longest[100];
    int i, length = 0, maxLength = 0;
    printf("Enter a sentence: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    char *token = strtok(str, " ");
    while (token != NULL) 
    {
        length = strlen(token);
        if (length > maxLength) 
        {
            maxLength = length;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }
    printf("Longest word: %s\n", longest);
    return 0;
}