/*Q113: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. 
Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
int main() 
{
    int n, k, i, j, temp;
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
    for(i = 0; i < n-1; i++) 
    {
        for(j = 0; j < n-i-1; j++) 
        {
            if(arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(k > 0 && k <= n) 
    {
        printf("The %dth smallest element is: %d\n", k, arr[k-1]);
    } 
    else 
    {
        printf("Invalid value of k\n");
    }
    return 0;
}