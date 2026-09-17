//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the size of the matrix: \n");
    scanf("%d %d", &r, &c);
    if (r != c)
    {
        printf("Matrix is not square.\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    int matrix[r][c];
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        sum += matrix[i][i];
    }
    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}