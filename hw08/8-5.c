#include <stdio.h>

void minmax_scaling(double *array) {
    double min = array[0], max = array[0];
    
    for(int i = 0; i < 5; i++) {
        if(*(array+i) < min) min = *(array+i);
        if(*(array+i) > max) max = *(array+i);
    }
    
    for(int i = 0; i < 5; i++) {
        *(array+i) = (*(array+i) - min) / (max - min);
    }
}

int main() {
    double array[5] = {0, };
    
    for(int i = 0; i < 5; i++) {
        scanf("%lf", array+i);
    }
    
    minmax_scaling(array);
    
    for(int i = 0; i < 5; i++) {
        printf("%0.1lf ", *(array+i));
    }
    
    return 0;
}