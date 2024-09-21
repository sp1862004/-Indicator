// Cubes Generator 

#include <stdio.h>

// User-defined function to calculate the cubes of elements
void findCubes(int *arr, int rows, int cols) {
    int i, j;

    printf("Cubes of all elements in the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Calculate and print the cube using the pointer
            printf("%d ", (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j)));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, i, j;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols]; // Declare a 2D array

    // Input the elements of the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the function to calculate and print cubes of all elements
    findCubes((int *)arr, rows, cols);

    return 0;
}
