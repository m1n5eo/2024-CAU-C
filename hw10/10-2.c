#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **strings = NULL;
    int size = 0;

    scanf("%d\n", &size);

    strings = (char **)calloc(size, sizeof(char *));

    int length = 0;
    char temp[1111] = {0};

    for(int i = 0; i < size; i++) {
        strings[i] = (char *)calloc(1111, sizeof(char));

        fgets(temp, 1111, stdin);

        length = strlen(temp);
        strings[i] = (char *)calloc(length+1, sizeof(char));
        strncpy(strings[i], temp, length);
    }

    for(int i = 0; i < size; i++) {
        fputs(strings[i], stdout);
    }

    for(int i = 0; i < size; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}