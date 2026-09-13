//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{
    int n, i, largest, second_largest;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = second_largest = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    if (second_largest == -1)
    {
        printf("There is no second largest element in the array.\n");
    }
    else
    {
        printf("The second largest element in the array is: %d\n", second_largest);
    }
    return 0;
}