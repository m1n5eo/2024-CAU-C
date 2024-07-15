#include <stdio.h>

void abs(int *number1, int *number2) {
    if(*number1 < 0) *number1 *= -1;
    if(*number2 < 0) *number2 *= -1;
}

int main() {
    int number1, number2;
    
    scanf("%d %d", &number1, &number2);
    
    abs(&number1, &number2);
    
    printf("%d %d", number1, number2);
    
    return 0;
}