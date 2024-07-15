#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int row = 0, column = 0;

    printf("Give the row and column length: ");
    scanf("%d %d", &row, &column);

    int **matrix = (int **)calloc(row, sizeof(int *));

    for(int i = 0; i < row; i++) {
        matrix[i] = (int *)calloc(column, sizeof(int));
    }

    for(int i = 0; i < row; i++) {
        printf("Give the #%d row elements: ", i+1);
        for(int j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    FILE *file = fopen("test.csv", "w");
    if(file == NULL) {
        perror("Failed to read file.\n");
        return -1;
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if(j < column-1) fprintf(file, "%d ", matrix[i][j]);
            else fprintf(file, "%d\n", matrix[i][j]);
        }
    }

    fclose(file);

    file = fopen("test.csv", "r");
    if(file == NULL) {
        perror("Failed to write file.\n");
        return -1;
    }

    char buffer[111] = {0};
    char *position = buffer;

    row = 0;
    column = 0;

    while(fgets(buffer, sizeof(buffer), file) != NULL) {
        if(row == 0) {
            while((position = strchr(position, ' ')) != NULL) {
                position += 1;
                column += 1;
            }
            column += 1;
        }
        row += 1;
    }

    rewind(file);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if(j < column-1) {
                fscanf(file, "%d ", &matrix[i][j]);
                printf("%d ", matrix[i][j]);
            }
            else {
                fscanf(file, "%d\n", &matrix[i][j]);
                printf("%d\n", matrix[i][j]);
            }
        }
    }

    for(int i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}