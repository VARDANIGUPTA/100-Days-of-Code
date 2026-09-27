//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    int lastSpace = 0;
    for (int i = 0; i < len; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }
    for (int i = 0; i < lastSpace; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
            printf("%c.", name[i]);
    }
    printf(" %s\n", &name[lastSpace + 1]);
    return 0;
}