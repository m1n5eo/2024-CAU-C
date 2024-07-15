#include <stdio.h>

int main() {
    char ch = 0;

    scanf("%c", &ch);
    printf("%c\n", ch+('a'-'A'));

    return 0;
}