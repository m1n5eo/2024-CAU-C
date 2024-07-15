#include <stdio.h>

int main() {
    int n, first = 0, second = 0, third = 1;

    scanf("%d", &n);

    for(int i = 1; i < n; i++) {
        first = second;
        second = third;
        third = first+second;
    }

    printf("%d", third);

    return 0;
}