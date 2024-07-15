#include <stdio.h>
#include <stdlib.h>

int main() {
    int length = 0;
    int *array = 0;
    
    printf("Type the length of array: ");
    scanf("%d", &length);
    
    array = (int *)malloc(sizeof(int)*length);
    
    printf("Type the elements of array: ");
    for(int i = 0; i < length; i++) scanf("%d", &array[i]);
    
    for(int i = 0; i < length; i++) printf("%d ", array[i]);
    
    free(array);

    return 0;
}