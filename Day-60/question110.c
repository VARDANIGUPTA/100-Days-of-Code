/*Q110: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
int main()
{
    int n, k, i, j, max;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: \n");
    scanf("%d", &k);
    printf("Maximum elements in each subarray of size %d are: ", k);
    for(i = 0; i <= n - k; i++) 
    {
        max = arr[i];
        for(j = 1; j < k; j++) 
        {
            if(arr[i + j] > max) 
            {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}