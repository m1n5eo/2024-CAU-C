#include <stdio.h>

int main() {
    int n;
    double res = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &n);
        res += (double)n;
    }

    printf("%.3lf", res/5);

    return 0;
}