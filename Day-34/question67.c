//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main()
{
    int n, pos, element;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert the element: \n");
    scanf("%d", &pos);
    printf("Enter the element to insert: \n");
    scanf("%d", &element);
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;
    printf("Array after insertion: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}