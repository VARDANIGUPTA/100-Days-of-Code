//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main()
{
    int i, j, row, col, sum = 0;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    for(i=0; i<row; i++)
    {
        printf("Enter the elements of %d row \n", (i+1));
        for(j=0; j<col; j++)
        {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
}