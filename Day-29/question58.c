//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main()
{
    int n, max, min;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(i==0)
        {
            max = arr[i];
            min = arr[i];
        }
        else
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    printf("Max=%d, Min=%d", max, min);
    return 0;
}