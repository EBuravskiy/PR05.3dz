#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int arr[100][100];
    int rows, cols;
    printf("Enter the number of array rows: ");
    scanf_s("%d", &rows);
    printf("Enter the number of array columns: ");
    scanf_s("%d", &cols);
    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < cols; i++) {
            arr[j][i] = rand() % 10 - 2;
        }
    }
    printf("Entered array elements: \n");
    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < cols; i++) {
            printf("%3d", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}