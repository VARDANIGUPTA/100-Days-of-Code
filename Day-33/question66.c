//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
    int n, i, key, j;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the elements of the array in sorted order: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: \n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > key)
            break;
    }
    for (j = n; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = key;
    printf("Array after insertion: \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}