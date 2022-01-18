#include <stdio.h>

int binary(int num, int low, int high, int array[]);

int main()
{
    int n, i;
    printf("enter the No : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array: ");
    // taking element of array from user
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int index = binary(num, 0, n - 1, array);
    if (index == -1)
    {
        printf("Element not found !! \n");
        return 0;
    }
    printf("%d at index %d \n", array[index], index);
}

int binary(int num, int low, int high, int array[])
{
    int mid = (high + low) / 2;
    if (low > high)
    {
        return -1;
    }
    if (array[mid] == num)
    {
        return mid; 
    }
    if (array[mid] > num)
    {
        return binary(num, 0, mid - 1, array); //send index of array as subset of it
    }
    if (array[mid] < num)
    {
        return binary(num, mid + 1, high, array);
    }
}