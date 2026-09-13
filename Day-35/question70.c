//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main()
{
    int n, k, i;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate the array: \n");
    scanf("%d", &k);
    k = k % n;
    int rotated_arr[n];
    for (i = 0; i < n; i++)
    {
        rotated_arr[(i + k) % n] = arr[i];
    }
    printf("The rotated array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotated_arr[i]);
    }
    printf("\n");
    return 0;
}