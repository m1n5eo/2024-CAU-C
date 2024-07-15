#include <stdio.h>

int main() {
    int a, b;
    char ch;

    scanf("%d %c %d", &a, &ch, &b);

    switch(ch) {
        case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;
        case '*':
            printf("%d", a*b);
            break;
        case '/':
            printf("%.3lf", (double)a/(double)b);
            break;
    }

    return 0;
}