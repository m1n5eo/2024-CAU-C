#include <stdio.h>

int main() {
    int array[5] = {0, }, index;
    
    printf("Array: ");
    for(int i = 0; i < 4; i++) {
        scanf("%d", array+i);
    }
    
    printf("Give the index number: ");
    scanf("%d", &index);
    
    if(0 < index && index <= 4) printf("%d", *(array+index-1));
    else printf("Out of range");
    
    return 0;
}