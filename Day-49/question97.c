//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter a name: \n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    for (int i = 0; i < strlen(name); i++) 
    {
        if (i == 0 || name[i - 1] == ' ') 
        {
            printf("%c.", (name[i]));
        }
    }
    printf("\n");
    return 0;
}