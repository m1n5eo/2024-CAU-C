#include <stdio.h>

int main() {
    int integer = 0;
    double demical = 0;

    scanf("%d %lf", &integer, &demical);
    printf("% -10d %+10.2lf", integer, demical);

    return 0;
}