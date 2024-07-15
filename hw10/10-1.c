#include <stdio.h>
#include <string.h>

int main() {
    char string[1111] = {0};

    fgets(string, 1111, stdin);

    int length = strlen(string);

    for(int i = 0; i < length; i++) {
        if('A' <= string[i] && string[i] <= 'Z') string[i] += 'a'-'A';
        else if('a' <= string[i] && string[i] <= 'z') string[i] += 'A'-'a';
    }

    printf("%s\n", string);

    return 0;
}