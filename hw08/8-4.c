#include <stdio.h>

void swap(int *array) {
    int temp = *array;

    *array = *(array+4);
    *(array+4) = temp;
}

int main() {
    int array[5] = {0, };
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", array+i);
    }
    
    swap(array);
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(array+i));
    }
    
    return 0;
}