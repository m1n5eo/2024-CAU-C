#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[1111] = {0};
    char string2[1111] = {0};
    int length = 0;

    fgets(string1, 1111, stdin);
    length = strlen(string1)-1;

    for(int i = 0; i < length; i++) {
        string2[length-i-1] = string1[i];
    }

    printf("%s\n", string2);

    return 0;
}