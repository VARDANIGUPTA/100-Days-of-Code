//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i;
    printf("Enter first string: \n");
    scanf("%s", str1);
    printf("Enter second string: \n");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++) 
    {
        count1[(unsigned char)str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++) 
    {
        count2[(unsigned char)str2[i]]++;
    }
    for (i = 0; i < 256; i++) 
    {
        if (count1[i] != count2[i]) 
        {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}