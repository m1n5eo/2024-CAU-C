#include <stdio.h>

int function(int a, int b, int c) {
    int value = b*b-4*a*c;
 
    if(value > 0) return 1;
    else if(value == 0) return 2;
    else if(value < 0) return 3;
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int sw = function(a, b, c);
    
    if(sw == 1) printf("Two different real values\n");
    else if(sw == 2) printf("Two same real values\n");
    else if(sw == 3) printf("Two different complex values");
}