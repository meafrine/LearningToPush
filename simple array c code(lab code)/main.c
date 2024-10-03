#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Declare and initialize an array
    int array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array) / sizeof(array[0]);

    // Access and print elements
    printf("First element: %d\n", array[0]); // Access first element
    printf("Second element: %d\n", array[1]); // Access second element

    // Modify elements
    array[2] = 35; // Modify the third element
    printf("Modified third element: %d\n", array[2]);

    // Loop through the array and print all elements
    printf("All elements in the array:\n");
    for (int i = 0; i < length; i++) {
        printf("Element at index %d: %d\n", i, array[i]);
    }

    return 0;
}


