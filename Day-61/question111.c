/*Q111: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right. 
If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
int main()
{
    int n, k, i, j, firstNegative;
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
    printf("First negative integers in each subarray of size %d are: ", k);
    for(i = 0; i <= n - k; i++) 
    {
        firstNegative = 0;
        for(j = 0; j < k; j++) 
        {
            if(arr[i + j] < 0) 
            {
                firstNegative = arr[i + j];
                break;
            }
        }
        printf("%d ", firstNegative);
    }
    printf("\n");
    return 0;
}