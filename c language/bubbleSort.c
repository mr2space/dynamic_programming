#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the No : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array: ");
    // Taking array from user using for loop
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }
    int pass, index, temp;

    int high = n - 1; //highest index c has to compare in array
    while (pass < n)
    {
        for (index = 0; index < high; ++index)
        {
            if (array[index] > array[index + 1])
            {   //swaping the array elemnt in ascending order
                temp = array[index + 1];
                array[index + 1] = array[index];
                array[index] = temp;
            }
            else if (array[index] < array[index + 1])
            {
                continue;
            }
        }
        high = high - 1;
        ++pass;
    }
    // Printing the array
    for (i = 0; i < n; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
