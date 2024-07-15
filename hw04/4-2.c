#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if('A' <= ch && ch <= 'Z') ch += 'a'-'A';
    else if('a' <= ch && ch <= 'z') ch += 'A'-'a';

    printf("%c", ch);

    return 0;
}