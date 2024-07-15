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
        }
    }

    int new_row = column;
    int new_column = row;

    int **new_array = (int **)malloc(sizeof(int*)*new_row);
    for(int i = 0; i < new_row; i++) {
        new_array[i] = (int *)malloc(sizeof(int)*new_column);
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            new_array[j][i] = array[i][j];
        }
    }

    for(int i = 0; i < new_row; i++) {
        for(int j = 0; j < new_column; j++) {
            printf("%d ", new_array[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++) {
        free(array[i]);
    }
    free(array);

    for(int i = 0; i < row; i++) {
        free(new_array[i]);
    }
    free(new_array);

    return 0;
}