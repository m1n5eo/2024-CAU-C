#include <stdio.h>

int main() {
    int array[5];
    
    printf("Give four numbers: ");
    for(int i = 0; i < 4; i++) {
        scanf("%d", array+i);
    }
    
    for(int i = 0; i < 4; i++) {
        *(array+4) += *(array+i);
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d", *(array+i));
    }
    
    return 0;
}