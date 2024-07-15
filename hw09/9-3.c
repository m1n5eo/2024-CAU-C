#include <stdio.h>
#include <stdlib.h>

int main() {
    int length = 0;
    int capacity = 2;

    int *array = (int *)malloc(sizeof(int)*capacity);

    for(int i = 0; i < 4; i++) {
        printf("Type the values: ");
        scanf("%d", &array[i]);
        length++;

        if(length >= capacity) {
            capacity *= 2;
            array = (int *)realloc(array, sizeof(int)*capacity);
        }

        for(int j = 0; j < length; j++) {
            printf("%d ", array[j]);
        }
        printf("(Capacity : %d)\n", capacity);
    }

    free(array);

    return 0;
}