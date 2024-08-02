#include <stdio.h>

int main()
{
    // Number of elements in the array
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to hold the actual integer values
    int values[n];

    // Declare an array of pointers to integers
    int *arr[n];

    // Get user input and assign values
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", i);
        scanf("%d", &values[i]);
        arr[i] = &values[i]; // Assign the address of values[i] to arr[i]
    }

    // Print the values and addresses
    for (int i = 0; i < n; i++)
    {
        printf("Value at arr[%d]: %d\n", i, *arr[i]);
        printf("Address stored in arr[%d]: %p\n", i, *arr[i]);
    }

    return 0;
}
