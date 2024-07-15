#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 0;
    int column = 0;

    printf("Give the row and column length: ");
    scanf("%d %d", &row, &column);

    int **array = (int **)malloc(sizeof(int*)*row);
    for(int i = 0; i < row; i++) {
        array[i] = (int *)malloc(sizeof(int)*column);
    }

    double average = 0;
    for(int i = 0; i < row; i++) {
        printf("Give the #%d row elements: ", i+1);
        for(int j = 0; j < column; j++) {
            scanf("%d", &array[i][j]);
            average += array[i][j];
        }
    }

    average /= row*column;

    printf("The average is %.1lf", average);

    return 0;
}