//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>
int main()
{
    int i, j, row, col;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    for(i=0; i<row; i++)
    {
        printf("Enter the elements of %d row \n", (i+1));
        for(j=0; j<col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}