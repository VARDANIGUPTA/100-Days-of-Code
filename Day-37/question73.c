//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the size of the matrix (rows and columns): \n");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int rowSum[rows];
    for (int i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
    }
    printf("Enter the elements of the matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }
    printf("The sum of each row is: \n");
    for(int i=0; i<rows; i++)
    {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    return 0;
}