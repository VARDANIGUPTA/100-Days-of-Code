//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    char op;
    int n1, n2;
    printf("Enter both numbers and the operator\n");
    scanf("%d %d %c", &n1, &n2, &op);
    switch(op)
    {
        case '+':
        {
             printf("%d", (n1+n2));
        break;
        }
        case '-':
        {
        printf("%d", (n1-n2));
        break;
        }
        case '*':
        {
            printf("%d", (n1*n2));
            break;
        }
        case '/':
        {
            printf("%d", (n1/n2));
            break;
        }
        case '%':
        {
            printf("%d", (n1%n2));
            break;
        }
        default:
        printf("Invalid Input");
    }
    return 0;
}