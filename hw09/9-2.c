#include <stdio.h>
#include <stdlib.h>

int main() {
    int length = 0;
    int *array = 0;
    
    printf("Type the length of array: ");
    scanf("%d", &length);
    
    array = (int *)malloc(sizeof(int)*length);
    
    printf("Type the elements of array: ");
    for(int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }
    
    array = (int *)realloc(array, sizeof(int)*length*2);
    
    for(int i = 0; i < length; i++) {
        array[i+5] = array[i];
    }
    
    for(int i = 0; i < length*2; i++) {
        printf("%d ", array[i]);
    }
    
    free(array);

    return 0;
}