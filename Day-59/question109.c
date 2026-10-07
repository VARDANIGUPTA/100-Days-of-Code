/*Q109: Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int main()
{
    int n, k, i, max_sum = 0, current_sum = 0;
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
    for(i = 0; i < k; i++) 
    {
        current_sum += arr[i];
    }
    max_sum = current_sum;
    for(i = k; i < n; i++) 
    {
        current_sum += arr[i] - arr[i - k];
        if(current_sum > max_sum) 
        {
            max_sum = current_sum;
        }
    }
    printf("Maximum sum of all subarrays of size %d is: %d\n", k, max_sum);
    return 0;
}