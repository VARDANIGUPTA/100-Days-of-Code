//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    float l, b, area, perimeter;
    printf("Enter length and breadth of rectangle: \n");
    scanf("%f %f", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area= %.2f\n", area);
    printf(" Perimeter= %.2f\n", perimeter);
    return 0;
}