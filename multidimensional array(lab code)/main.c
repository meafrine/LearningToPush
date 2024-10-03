#include <stdio.h>
#include <stdlib.h>

// Function to display a 2D array
void displayArray(int** array, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

// Function to merge two 2D arrays
int** mergeArrays(int** array1, int rows1, int columns1, int** array2, int rows2, int columns2) {
    int totalRows = rows1 + rows2;
    int** mergedArray = (int**)malloc(totalRows * sizeof(int*));
    for (int i = 0; i < totalRows; i++) {
        mergedArray[i] = (int*)malloc(columns1 * sizeof(int));
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            mergedArray[i][j] = array1[i][j];
        }
    }
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns1; j++) { // assuming both arrays have same number of columns
            mergedArray[rows1 + i][j] = array2[i][j];
        }
    }

    return mergedArray;
}

int main() {
    // Hardcoded array
    int hardcodedArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows1 = 3, columns1 = 3;

    printf("Hardcoded Array:\n");
    int* hardcodedArrayPtrs[3] = {hardcodedArray[0], hardcodedArray[1], hardcodedArray[2]};
    displayArray(hardcodedArrayPtrs, rows1, columns1);

    // Array from user input
    int rows2, columns2;
    printf("\nEnter the number of rows for the array: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the array: ");
    scanf("%d", &columns2);

    int** userInputArray = (int**)malloc(rows2 * sizeof(int*));
    for (int i = 0; i < rows2; i++) {
        userInputArray[i] = (int*)malloc(columns2 * sizeof(int));
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            scanf("%d", &userInputArray[i][j]);
        }
    }

    printf("\nUser Input Array:\n");
    displayArray(userInputArray, rows2, columns2);

    // Merging the arrays
    int** mergedArray = mergeArrays(hardcodedArrayPtrs, rows1, columns1, userInputArray, rows2, columns2);

    printf("\nMerged Array:\n");
    displayArray(mergedArray, rows1 + rows2, columns1);

    // Free allocated memory
    for (int i = 0; i < rows2; i++) {
        free(userInputArray[i]);
    }
    free(userInputArray);

    for (int i = 0; i < rows1 + rows2; i++) {
        free(mergedArray[i]);
    }
    free(mergedArray);

    return 0;
}


